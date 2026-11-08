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

// Function: entry_001618d4
// Address: 0x1618d4 - 0x161940
void entry_001618d4_0x1618d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001618d4_0x1618d4");
#endif

    switch (ctx->pc) {
        case 0x1618f0u: goto label_1618f0;
        case 0x1618f8u: goto label_1618f8;
        case 0x161910u: goto label_161910;
        case 0x161924u: goto label_161924;
        default: break;
    }

    ctx->pc = 0x1618d4u;

    // 0x1618d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1618d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1618d8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1618d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1618dc: 0x8e9101b8  lw          $s1, 0x1B8($s4)
    ctx->pc = 0x1618dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1618e0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1618e4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1618e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1618e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1618E8u;
    SET_GPR_U32(ctx, 31, 0x1618F0u);
    ctx->pc = 0x1618ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1618E8u;
    // 0x1618ec: 0x129180  sll         $s2, $s2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1618E8u, 0x1618F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618F0u;
label_1618f0:
    // 0x1618f0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1618F0u;
    SET_GPR_U32(ctx, 31, 0x1618F8u);
    ctx->pc = 0x1618F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1618F0u;
    // 0x1618f4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1618F0u, 0x1618F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618F8u;
label_1618f8:
    // 0x1618f8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1618f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1618fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1618fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161900: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x161900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161904: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x161904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x161908: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x161908u;
    SET_GPR_U32(ctx, 31, 0x161910u);
    ctx->pc = 0x16190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161908u;
    // 0x16190c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x161908u, 0x161910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161910u;
label_161910:
    // 0x161910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161914: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x161914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x161918: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16191c: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x16191Cu;
    SET_GPR_U32(ctx, 31, 0x161924u);
    ctx->pc = 0x161920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16191Cu;
    // 0x161920: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x16191Cu, 0x161924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161924u;
label_161924:
    // 0x161924: 0x8e840c18  lw          $a0, 0xC18($s4)
    ctx->pc = 0x161924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3096)));
    // 0x161928: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161928u;
    {
        const bool branch_taken_0x161928 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161928u;
        // 0x16192c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161928) {
            ctx->pc = 0x161940u;
            return;
        }
    }
    ctx->pc = 0x161930u;
    // 0x161930: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161934: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x161938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161938u;
    {
        const bool branch_taken_0x161938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161938u;
        // 0x16193c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161938) {
            ctx->pc = 0x161944u;
            return;
        }
    }
    ctx->pc = 0x161940u;
}
