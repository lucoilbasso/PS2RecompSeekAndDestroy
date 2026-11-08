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

// Function: entry_0017a8d0
// Address: 0x17a8d0 - 0x17a934
void entry_0017a8d0_0x17a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a8d0_0x17a8d0");
#endif

    switch (ctx->pc) {
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8f8u: goto label_17a8f8;
        case 0x17a920u: goto label_17a920;
        default: break;
    }

    ctx->pc = 0x17a8d0u;

    // 0x17a8d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a8d4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x17a8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17A8D8u;
    SET_GPR_U32(ctx, 31, 0x17A8E0u);
    ctx->pc = 0x17A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8D8u;
    // 0x17a8dc: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17A8D8u, 0x17A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8E0u;
label_17a8e0:
    // 0x17a8e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a8e4: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x17a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x17a8e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8ec: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x17a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x17a8f0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x17A8F0u;
    SET_GPR_U32(ctx, 31, 0x17A8F8u);
    ctx->pc = 0x17A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8F0u;
    // 0x17a8f4: 0x42800b  movn        $s0, $v0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x17A8F0u, 0x17A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8F8u;
label_17a8f8:
    // 0x17a8f8: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x17a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x17a8fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17a8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a900: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x17a900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x17a904: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x17a904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a908: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x17a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17a90c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a910: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x17a910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a914: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17a914u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a918: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x17A918u;
    SET_GPR_U32(ctx, 31, 0x17A920u);
    ctx->pc = 0x17A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A918u;
    // 0x17a91c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x17A918u, 0x17A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A920u;
label_17a920:
    // 0x17a920: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17a924: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x17a924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x17a928: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x17a928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
    // 0x17a92c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17A92Cu;
    SET_GPR_U32(ctx, 31, 0x17A934u);
    ctx->pc = 0x17A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A92Cu;
    // 0x17a930: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17A92Cu, 0x17A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A934u;
}
