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

// Function: entry_0017b198
// Address: 0x17b198 - 0x17b1e8
void entry_0017b198_0x17b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b198_0x17b198");
#endif

    switch (ctx->pc) {
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1b8u: goto label_17b1b8;
        default: break;
    }

    ctx->pc = 0x17b198u;

label_17b198:
    // 0x17b198: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17b19c: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B19Cu;
    SET_GPR_U32(ctx, 31, 0x17B1A4u);
    ctx->pc = 0x17B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B19Cu;
    // 0x17b1a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B19Cu, 0x17B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1A4u;
label_17b1a4:
    // 0x17b1a4: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17B1A4u;
    {
        const bool branch_taken_0x17b1a4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17b1a4) {
            ctx->pc = 0x17B1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B1A4u;
            // 0x17b1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b198;
        }
    }
    ctx->pc = 0x17B1ACu;
    // 0x17b1ac: 0x265000d0  addiu       $s0, $s2, 0xD0
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x17b1b0: 0xc05e9d8  jal         func_17A760
    ctx->pc = 0x17B1B0u;
    SET_GPR_U32(ctx, 31, 0x17B1B8u);
    ctx->pc = 0x17B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1B0u;
    // 0x17b1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A760u, 0x17B1B0u, 0x17B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1B8u;
label_17b1b8:
    // 0x17b1b8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17b1bc: 0x26430500  addiu       $v1, $s2, 0x500
    ctx->pc = 0x17b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    // 0x17b1c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b1c4: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x17b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x17b1c8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x17b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17b1cc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x17b1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1d4: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x17b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
    // 0x17b1d8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17b1dc: 0xae45011c  sw          $a1, 0x11C($s2)
    ctx->pc = 0x17b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 5));
    // 0x17b1e0: 0xc05eeaa  jal         func_17BAA8
    ctx->pc = 0x17B1E0u;
    SET_GPR_U32(ctx, 31, 0x17B1E8u);
    ctx->pc = 0x17B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1E0u;
    // 0x17b1e4: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAA8u, 0x17B1E0u, 0x17B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1E8u;
}
