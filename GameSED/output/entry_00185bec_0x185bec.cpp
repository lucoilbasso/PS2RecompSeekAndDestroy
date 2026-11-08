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

// Function: entry_00185bec
// Address: 0x185bec - 0x185c00
void entry_00185bec_0x185bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185bec_0x185bec");
#endif

    ctx->pc = 0x185becu;

    // 0x185bec: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x185becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x185bf0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x185bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x185bf4: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x185BF4u;
    {
        const bool branch_taken_0x185bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BF4u;
        // 0x185bf8: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bf4) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185BFCu;
    // 0x185bfc: 0x0  nop
    ctx->pc = 0x185bfcu;
    // NOP
    ctx->pc = 0x185c00u;
}
