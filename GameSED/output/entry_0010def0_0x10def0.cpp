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

// Function: entry_0010def0
// Address: 0x10def0 - 0x10df20
void entry_0010def0_0x10def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010def0_0x10def0");
#endif

    switch (ctx->pc) {
        case 0x10df14u: goto label_10df14;
        default: break;
    }

    ctx->pc = 0x10def0u;

    // 0x10def0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10DEF0u;
    {
        const bool branch_taken_0x10def0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEF0u;
        // 0x10def4: 0xacc401c4  sw          $a0, 0x1C4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10def0) {
            ctx->pc = 0x10DF20u;
            return;
        }
    }
    ctx->pc = 0x10DEF8u;
    // 0x10def8: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x10def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x10defc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x10df00: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10df00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x10df04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10df08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10df0c: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10DF0Cu;
    SET_GPR_U32(ctx, 31, 0x10DF14u);
    ctx->pc = 0x10DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF0Cu;
    // 0x10df10: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10DF0Cu, 0x10DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF14u;
label_10df14:
    // 0x10df14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10DF14u;
    {
        const bool branch_taken_0x10df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF14u;
        // 0x10df18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df14) {
            ctx->pc = 0x10DF2Cu;
            return;
        }
    }
    ctx->pc = 0x10DF1Cu;
    // 0x10df1c: 0x0  nop
    ctx->pc = 0x10df1cu;
    // NOP
    ctx->pc = 0x10df20u;
}
