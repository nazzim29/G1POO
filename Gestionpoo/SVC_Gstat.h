#pragma once
#include "CAD.h"
namespace Service {
	using namespace System;
	using namespace System::Data;
	ref class SVC_Gstat
	{
		private:
			Composant::CAD^ cad;
		public:
			SVC_Gstat();
			float calculpaniermoyen();
			float calculchiffreaffaire(DateTime^, DateTime^);
			DataTable^ produitsousseuil();
			float calcultotalachatclient();
			DataTable^ topvendu();
			DataTable^ flopvendu();
			float valeurcommercialstock();
			float valeurachatstock();
	};
}