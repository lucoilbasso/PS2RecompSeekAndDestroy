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

// Function: entry_00157d70
// Address: 0x157d70 - 0x157db8
void entry_00157d70_0x157d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157d70_0x157d70");
#endif

    switch (ctx->pc) {
        case 0x157d88u: goto label_157d88;
        default: break;
    }

    ctx->pc = 0x157d70u;

label_157d70:
    // 0x157d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157d74:
    // 0x157d74: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x157d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_157d78:
    // 0x157d78: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x157d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_157d7c:
    // 0x157d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_157d80:
    // 0x157d80: 0x40f809  jalr        $v0
label_157d84:
    if (ctx->pc == 0x157D84u) {
        ctx->pc = 0x157D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D80u;
        // 0x157d84: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D88u;
        goto label_157d88;
    }
    ctx->pc = 0x157D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157D88u);
        ctx->pc = 0x157D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D80u;
        // 0x157d84: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D80u, 0x157D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157D88u;
label_157d88:
    // 0x157d88: 0xdfb004a0  ld          $s0, 0x4A0($sp)
    ctx->pc = 0x157d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_157d8c:
    // 0x157d8c: 0xdfb104a8  ld          $s1, 0x4A8($sp)
    ctx->pc = 0x157d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1192)));
label_157d90:
    // 0x157d90: 0xdfb204b0  ld          $s2, 0x4B0($sp)
    ctx->pc = 0x157d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_157d94:
    // 0x157d94: 0xdfb304b8  ld          $s3, 0x4B8($sp)
    ctx->pc = 0x157d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
label_157d98:
    // 0x157d98: 0xdfb404c0  ld          $s4, 0x4C0($sp)
    ctx->pc = 0x157d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
label_157d9c:
    // 0x157d9c: 0xdfb504c8  ld          $s5, 0x4C8($sp)
    ctx->pc = 0x157d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1224)));
label_157da0:
    // 0x157da0: 0xdfb604d0  ld          $s6, 0x4D0($sp)
    ctx->pc = 0x157da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_157da4:
    // 0x157da4: 0xdfb704d8  ld          $s7, 0x4D8($sp)
    ctx->pc = 0x157da4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
label_157da8:
    // 0x157da8: 0xdfbe04e0  ld          $fp, 0x4E0($sp)
    ctx->pc = 0x157da8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_157dac:
    // 0x157dac: 0xdfbf04e8  ld          $ra, 0x4E8($sp)
    ctx->pc = 0x157dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1256)));
label_157db0:
    // 0x157db0: 0x3e00008  jr          $ra
label_157db4:
    if (ctx->pc == 0x157DB4u) {
        ctx->pc = 0x157DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DB0u;
        // 0x157db4: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157DB8u;
        goto label_fallthrough_0x157db0;
    }
    ctx->pc = 0x157DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DB0u;
        // 0x157db4: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157db0:
    ctx->pc = 0x157DB8u;
}
