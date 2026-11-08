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

// Function: Create__7WcLighti
// Address: 0x1de260 - 0x1de30c
void Create__7WcLighti_0x1de260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__7WcLighti_0x1de260");
#endif

    switch (ctx->pc) {
        case 0x1de27cu: goto label_1de27c;
        case 0x1de284u: goto label_1de284;
        case 0x1de29cu: goto label_1de29c;
        case 0x1de2c0u: goto label_1de2c0;
        case 0x1de2f4u: goto label_1de2f4;
        default: break;
    }

    ctx->pc = 0x1de260u;

    // 0x1de260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de26c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de274: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DE274u;
    SET_GPR_U32(ctx, 31, 0x1DE27Cu);
    ctx->pc = 0x1DE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE274u;
    // 0x1de278: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DE274u, 0x1DE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE27Cu;
label_1de27c:
    // 0x1de27c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DE27Cu;
    SET_GPR_U32(ctx, 31, 0x1DE284u);
    ctx->pc = 0x1DE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE27Cu;
    // 0x1de280: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DE27Cu, 0x1DE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE284u;
label_1de284:
    // 0x1de284: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1de284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1de288: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x1de288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x1de28c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de290: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1de290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1de294: 0xc061258  jal         func_184960
    ctx->pc = 0x1DE294u;
    SET_GPR_U32(ctx, 31, 0x1DE29Cu);
    ctx->pc = 0x1DE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE294u;
    // 0x1de298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DE294u, 0x1DE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE29Cu;
label_1de29c:
    // 0x1de29c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1de29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1de2a0: 0x26270150  addiu       $a3, $s1, 0x150
    ctx->pc = 0x1de2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1de2a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1de2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1de2a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1de2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1de2ac: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x1de2acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x1de2b0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1de2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1de2b4: 0x2448ed60  addiu       $t0, $v0, -0x12A0
    ctx->pc = 0x1de2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x1de2b8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1de2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1de2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de2c0:
    // 0x1de2c0: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1de2c4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1de2c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1de2c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1de2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1de2cc: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x1de2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1de2d0: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1de2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1de2d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1de2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1de2d8: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DE2D8u;
    {
        const bool branch_taken_0x1de2d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1DE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2D8u;
        // 0x1de2dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2d8) {
            ctx->pc = 0x1DE2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de2c0;
        }
    }
    ctx->pc = 0x1DE2E0u;
    // 0x1de2e0: 0x24e20090  addiu       $v0, $a3, 0x90
    ctx->pc = 0x1de2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x1de2e4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1de2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1de2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2ec: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DE2ECu;
    SET_GPR_U32(ctx, 31, 0x1DE2F4u);
    ctx->pc = 0x1DE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2ECu;
    // 0x1de2f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DE2ECu, 0x1DE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2F4u;
label_1de2f4:
    // 0x1de2f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1de2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de2fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de304: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE304u;
        // 0x1de308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE30Cu;
}
