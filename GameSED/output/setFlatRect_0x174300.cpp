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

// Function: setFlatRect
// Address: 0x174300 - 0x1743ac
void setFlatRect_0x174300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setFlatRect_0x174300");
#endif

    switch (ctx->pc) {
        case 0x174340u: goto label_174340;
        case 0x174354u: goto label_174354;
        case 0x174378u: goto label_174378;
        default: break;
    }

    ctx->pc = 0x174300u;

    // 0x174300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174304: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174308: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17430c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174310: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x174310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x174314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x174314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174318: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17431c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17431cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174324: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x174324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x174328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17432c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17432cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174330: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174334: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x174334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x174338: 0xc05d16e  jal         func_1745B8
    ctx->pc = 0x174338u;
    SET_GPR_U32(ctx, 31, 0x174340u);
    ctx->pc = 0x17433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174338u;
    // 0x17433c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1745B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1745B8u, 0x174338u, 0x174340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174340u;
label_174340:
    // 0x174340: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174348: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17434c: 0xc05d1ae  jal         func_1746B8
    ctx->pc = 0x17434Cu;
    SET_GPR_U32(ctx, 31, 0x174354u);
    ctx->pc = 0x174350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17434Cu;
    // 0x174350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1746B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746B8u, 0x17434Cu, 0x174354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174354u;
label_174354:
    // 0x174354: 0x103202  srl         $a2, $s0, 8
    ctx->pc = 0x174354u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x174358: 0x103c02  srl         $a3, $s0, 16
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x17435c: 0x104602  srl         $t0, $s0, 24
    ctx->pc = 0x17435cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x174360: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x174360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x174364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174368: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x174368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17436c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x17436cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x174370: 0xc05d19a  jal         func_174668
    ctx->pc = 0x174370u;
    SET_GPR_U32(ctx, 31, 0x174378u);
    ctx->pc = 0x174374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174370u;
    // 0x174374: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174668u, 0x174370u, 0x174378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174378u;
label_174378:
    // 0x174378: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x174378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17437c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x17437cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x174380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174384: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x174384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17438c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x17438cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174390: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174394: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x174394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174398: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x174398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17439c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1743a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1743a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1743a4: 0x805d1ae  j           func_1746B8
    ctx->pc = 0x1743A4u;
    ctx->pc = 0x1743A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743A4u;
    // 0x1743a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1746B8u;
    setXYZ2_0x1746b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1743ACu;
}
