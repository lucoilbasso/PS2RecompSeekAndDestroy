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

// Function: entry_0010c968
// Address: 0x10c968 - 0x10c998
void entry_0010c968_0x10c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c968_0x10c968");
#endif

    switch (ctx->pc) {
        case 0x10c97cu: goto label_10c97c;
        default: break;
    }

    ctx->pc = 0x10c968u;

    // 0x10c968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c96c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c970: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x10c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10c974: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C974u;
    SET_GPR_U32(ctx, 31, 0x10C97Cu);
    ctx->pc = 0x10C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C974u;
    // 0x10c978: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C974u, 0x10C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C97Cu;
label_10c97c:
    // 0x10c97c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c980: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C980u;
    {
        const bool branch_taken_0x10c980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C980u;
        // 0x10c984: 0x24040166  addiu       $a0, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c980) {
            ctx->pc = 0x10C998u;
            return;
        }
    }
    ctx->pc = 0x10C988u;
    // 0x10c988: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c98c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x10c98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10c990: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C990u;
    {
        const bool branch_taken_0x10c990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C990u;
        // 0x10c994: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c990) {
            ctx->pc = 0x10C9A0u;
            return;
        }
    }
    ctx->pc = 0x10C998u;
}
