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

// Function: FloatPartsEffectRequest__9ApcCqpartUiP9FVector32
// Address: 0x165168 - 0x1651e0
void FloatPartsEffectRequest__9ApcCqpartUiP9FVector32_0x165168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FloatPartsEffectRequest__9ApcCqpartUiP9FVector32_0x165168");
#endif

    switch (ctx->pc) {
        case 0x165184u: goto label_165184;
        case 0x1651acu: goto label_1651ac;
        default: break;
    }

    ctx->pc = 0x165168u;

    // 0x165168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16516c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16517c: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16517Cu;
    SET_GPR_U32(ctx, 31, 0x165184u);
    ctx->pc = 0x165180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16517Cu;
    // 0x165180: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16517Cu, 0x165184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165184u;
label_165184:
    // 0x165184: 0x8e220c10  lw          $v0, 0xC10($s1)
    ctx->pc = 0x165184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
    // 0x165188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16518c: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x165190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165194: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x165194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x165198: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16519c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16519Cu;
    {
        const bool branch_taken_0x16519c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16519Cu;
        // 0x1651a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16519c) {
            ctx->pc = 0x1651CCu;
            goto label_1651cc;
        }
    }
    ctx->pc = 0x1651A4u;
    // 0x1651a4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1651A4u;
    SET_GPR_U32(ctx, 31, 0x1651ACu);
    ctx->pc = 0x1651A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651A4u;
    // 0x1651a8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1651A4u, 0x1651ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651ACu;
label_1651ac:
    // 0x1651ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1651acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1651b0: 0xae221258  sw          $v0, 0x1258($s1)
    ctx->pc = 0x1651b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4696), GPR_U32(ctx, 2));
    // 0x1651b4: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x1651b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    // 0x1651b8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1651bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1651BCu;
    {
        const bool branch_taken_0x1651bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651BCu;
        // 0x1651c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651bc) {
            ctx->pc = 0x1651D0u;
            goto label_1651d0;
        }
    }
    ctx->pc = 0x1651C4u;
    // 0x1651c4: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x1651c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    // 0x1651c8: 0xae22125c  sw          $v0, 0x125C($s1)
    ctx->pc = 0x1651c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4700), GPR_U32(ctx, 2));
label_1651cc:
    // 0x1651cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1651ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1651d0:
    // 0x1651d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1651d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1651d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1651d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1651d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1651D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1651DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651D8u;
        // 0x1651dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1651D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1651E0u;
}
