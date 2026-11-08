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

// Function: _pictureHeader
// Address: 0x1c2320 - 0x1c23e4
void _pictureHeader_0x1c2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureHeader_0x1c2320");
#endif

    switch (ctx->pc) {
        case 0x1c233cu: goto label_1c233c;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c2388u: goto label_1c2388;
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23b4u: goto label_1c23b4;
        case 0x1c23c0u: goto label_1c23c0;
        case 0x1c23c8u: goto label_1c23c8;
        default: break;
    }

    ctx->pc = 0x1c2320u;

    // 0x1c2320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2324: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c2328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c232c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c2330: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2334: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2334u;
    SET_GPR_U32(ctx, 31, 0x1C233Cu);
    ctx->pc = 0x1C2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2334u;
    // 0x1c2338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2334u, 0x1C233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C233Cu;
label_1c233c:
    // 0x1c233c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c233cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2344: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2344u;
    SET_GPR_U32(ctx, 31, 0x1C234Cu);
    ctx->pc = 0x1C2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2344u;
    // 0x1c2348: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2344u, 0x1C234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C234Cu;
label_1c234c:
    // 0x1c234c: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x1c234cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x1c2350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2354: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2354u;
    SET_GPR_U32(ctx, 31, 0x1C235Cu);
    ctx->pc = 0x1C2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2354u;
    // 0x1c2358: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2354u, 0x1C235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C235Cu;
label_1c235c:
    // 0x1c235c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1c235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1c2360: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1c2364: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c2364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c2368: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2368u;
    {
        const bool branch_taken_0x1c2368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2368u;
        // 0x1c236c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2368) {
            ctx->pc = 0x1C2390u;
            goto label_1c2390;
        }
    }
    ctx->pc = 0x1C2370u;
    // 0x1c2370: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2370u;
    SET_GPR_U32(ctx, 31, 0x1C2378u);
    ctx->pc = 0x1C2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2370u;
    // 0x1c2374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2370u, 0x1C2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2378u;
label_1c2378:
    // 0x1c2378: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x1c2378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x1c237c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2380: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2380u;
    SET_GPR_U32(ctx, 31, 0x1C2388u);
    ctx->pc = 0x1C2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2380u;
    // 0x1c2384: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2380u, 0x1C2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2388u;
label_1c2388:
    // 0x1c2388: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1c2388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x1c238c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1c2390:
    // 0x1c2390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2394: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2394u;
    {
        const bool branch_taken_0x1c2394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2394u;
        // 0x1c2398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2394) {
            ctx->pc = 0x1C23B8u;
            goto label_1c23b8;
        }
    }
    ctx->pc = 0x1C239Cu;
    // 0x1c239c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C239Cu;
    SET_GPR_U32(ctx, 31, 0x1C23A4u);
    ctx->pc = 0x1C23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C239Cu;
    // 0x1c23a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C239Cu, 0x1C23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A4u;
label_1c23a4:
    // 0x1c23a4: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x1c23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x1c23a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c23a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ac: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C23ACu;
    SET_GPR_U32(ctx, 31, 0x1C23B4u);
    ctx->pc = 0x1C23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23ACu;
    // 0x1c23b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C23ACu, 0x1C23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23B4u;
label_1c23b4:
    // 0x1c23b4: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1c23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1c23b8:
    // 0x1c23b8: 0xc0709c0  jal         func_1C2700
    ctx->pc = 0x1C23B8u;
    SET_GPR_U32(ctx, 31, 0x1C23C0u);
    ctx->pc = 0x1C23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23B8u;
    // 0x1c23bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2700u, 0x1C23B8u, 0x1C23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23C0u;
label_1c23c0:
    // 0x1c23c0: 0xc0708fa  jal         func_1C23E8
    ctx->pc = 0x1C23C0u;
    SET_GPR_U32(ctx, 31, 0x1C23C8u);
    ctx->pc = 0x1C23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23C0u;
    // 0x1c23c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C23E8u, 0x1C23C0u, 0x1C23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23C8u;
label_1c23c8:
    // 0x1c23c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c23ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c23d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c23d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c23d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c23d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c23dc: 0x80709d2  j           func_1C2748
    ctx->pc = 0x1C23DCu;
    ctx->pc = 0x1C23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23DCu;
    // 0x1c23e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2748u;
    _updateTempTackData_0x1c2748(rdram, ctx, runtime); return;
    ctx->pc = 0x1C23E4u;
}
