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

// Function: entry_00149b38
// Address: 0x149b38 - 0x149b68
void entry_00149b38_0x149b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149b38_0x149b38");
#endif

    switch (ctx->pc) {
        case 0x149b64u: goto label_149b64;
        default: break;
    }

    ctx->pc = 0x149b38u;

    // 0x149b38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x149b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x149b3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149b44: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x149b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x149b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149b4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149B4Cu;
    {
        const bool branch_taken_0x149b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B4Cu;
        // 0x149b50: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b4c) {
            ctx->pc = 0x149B68u;
            return;
        }
    }
    ctx->pc = 0x149B54u;
    // 0x149b54: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x149b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x149b58: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x149b5c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x149B5Cu;
    SET_GPR_U32(ctx, 31, 0x149B64u);
    ctx->pc = 0x149B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B5Cu;
    // 0x149b60: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x149B5Cu, 0x149B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B64u;
label_149b64:
    // 0x149b64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x149b68u;
}
