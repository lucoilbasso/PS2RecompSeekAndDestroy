#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00155cfc
// Address: 0x155cfc - 0x155d00
void entry_00155cfc_0x155cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155cfc_0x155cfc");
#endif

    ctx->pc = 0x155cfcu;

    // 0x155cfc: 0x24639c18  addiu       $v1, $v1, -0x63E8
    ctx->pc = 0x155cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941720));
    ctx->pc = 0x155d00u;
}
