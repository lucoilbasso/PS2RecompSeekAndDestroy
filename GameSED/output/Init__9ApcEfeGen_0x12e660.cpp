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

// Function: Init__9ApcEfeGen
// Address: 0x12e660 - 0x12e724
void Init__9ApcEfeGen_0x12e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcEfeGen_0x12e660");
#endif

    switch (ctx->pc) {
        case 0x12e674u: goto label_12e674;
        case 0x12e6c0u: goto label_12e6c0;
        case 0x12e6f8u: goto label_12e6f8;
        default: break;
    }

    ctx->pc = 0x12e660u;

    // 0x12e660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12e66c: 0xc061258  jal         func_184960
    ctx->pc = 0x12E66Cu;
    SET_GPR_U32(ctx, 31, 0x12E674u);
    ctx->pc = 0x12E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E66Cu;
    // 0x12e670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x12E66Cu, 0x12E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E674u;
label_12e674:
    // 0x12e674: 0x240200e6  addiu       $v0, $zero, 0xE6
    ctx->pc = 0x12e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x12e678: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x12e678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x12e67c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12e680: 0x26030160  addiu       $v1, $s0, 0x160
    ctx->pc = 0x12e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x12e684: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x12e684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x12e688: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x12e688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x12e68c: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x12e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x12e690: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12e690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e694: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12e698: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x12e698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x12e69c: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x12e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12e6a0: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x12e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x12e6a4: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x12e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x12e6a8: 0x2442031c  addiu       $v0, $v0, 0x31C
    ctx->pc = 0x12e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 796));
    // 0x12e6ac: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x12e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x12e6b0: 0x240300c7  addiu       $v1, $zero, 0xC7
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x12e6b4: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x12e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x12e6b8: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x12e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x12e6bc: 0x0  nop
    ctx->pc = 0x12e6bcu;
    // NOP
label_12e6c0:
    // 0x12e6c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e6c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12e6c8: 0x0  nop
    ctx->pc = 0x12e6c8u;
    // NOP
    // 0x12e6cc: 0x0  nop
    ctx->pc = 0x12e6ccu;
    // NOP
    // 0x12e6d0: 0x0  nop
    ctx->pc = 0x12e6d0u;
    // NOP
    // 0x12e6d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E6D4u;
    {
        const bool branch_taken_0x12e6d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6D4u;
        // 0x12e6d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6d4) {
            ctx->pc = 0x12E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e6c0;
        }
    }
    ctx->pc = 0x12E6DCu;
    // 0x12e6dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12e6e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12e6e4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x12e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x12e6e8: 0x26040198  addiu       $a0, $s0, 0x198
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
    // 0x12e6ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12e6f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e6f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_12e6f8:
    // 0x12e6f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e6fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12e700: 0x0  nop
    ctx->pc = 0x12e700u;
    // NOP
    // 0x12e704: 0x0  nop
    ctx->pc = 0x12e704u;
    // NOP
    // 0x12e708: 0x0  nop
    ctx->pc = 0x12e708u;
    // NOP
    // 0x12e70c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E70Cu;
    {
        const bool branch_taken_0x12e70c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E70Cu;
        // 0x12e710: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e70c) {
            ctx->pc = 0x12E6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e6f8;
        }
    }
    ctx->pc = 0x12E714u;
    // 0x12e714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e71c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E71Cu;
        // 0x12e720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E724u;
}
