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

// Function: ThinkExec__12ApRemoteWork
// Address: 0x106ab8 - 0x106b24
void ThinkExec__12ApRemoteWork_0x106ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThinkExec__12ApRemoteWork_0x106ab8");
#endif

    switch (ctx->pc) {
        case 0x106b18u: goto label_106b18;
        default: break;
    }

    ctx->pc = 0x106ab8u;

    // 0x106ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106abc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x106abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106ac4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x106ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x106ac8: 0x24051605  addiu       $a1, $zero, 0x1605
    ctx->pc = 0x106ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    // 0x106acc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x106accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ad0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x106ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x106ad4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x106ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x106ad8: 0xac6200b8  sw          $v0, 0xB8($v1)
    ctx->pc = 0x106ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B8u, _value); } while (0);
    // 0x106adc: 0xaf879194  sw          $a3, -0x6E6C($gp)
    ctx->pc = 0x106adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939028), GPR_U32(ctx, 7));
    // 0x106ae0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x106ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106ae4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x106AE4u;
    {
        const bool branch_taken_0x106ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x106AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AE4u;
        // 0x106ae8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ae4) {
            ctx->pc = 0x106B08u;
            goto label_106b08;
        }
    }
    ctx->pc = 0x106AECu;
    // 0x106aec: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x106aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x106af0: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x106af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x106af4: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x106af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x106af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106afc: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x106afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x106b00: 0x8041228  j           func_1048A0
    ctx->pc = 0x106B00u;
    ctx->pc = 0x106B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B00u;
    // 0x106b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    ActorInterpEntry__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar_0x1048a0(rdram, ctx, runtime); return;
    ctx->pc = 0x106B08u;
label_106b08:
    // 0x106b08: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x106b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x106b0c: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x106b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x106b10: 0xc060e56  jal         func_183958
    ctx->pc = 0x106B10u;
    SET_GPR_U32(ctx, 31, 0x106B18u);
    ctx->pc = 0x106B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B10u;
    // 0x106b14: 0x8d05000c  lw          $a1, 0xC($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x106B10u, 0x106B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B18u;
label_106b18:
    // 0x106b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x106B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B1Cu;
        // 0x106b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106B24u;
}
