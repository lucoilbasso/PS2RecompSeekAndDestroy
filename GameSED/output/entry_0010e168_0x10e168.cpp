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

// Function: entry_0010e168
// Address: 0x10e168 - 0x10e1c8
void entry_0010e168_0x10e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e168_0x10e168");
#endif

    switch (ctx->pc) {
        case 0x10e1a4u: goto label_10e1a4;
        default: break;
    }

    ctx->pc = 0x10e168u;

label_10e168:
    // 0x10e168: 0x8e6201b0  lw          $v0, 0x1B0($s3)
    ctx->pc = 0x10e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
label_10e16c:
    // 0x10e16c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10e16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e170:
    // 0x10e170: 0xae370008  sw          $s7, 0x8($s1)
    ctx->pc = 0x10e170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 23));
label_10e174:
    // 0x10e174: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x10e174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_10e178:
    // 0x10e178: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_10e17c:
    if (ctx->pc == 0x10E17Cu) {
        ctx->pc = 0x10E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E178u;
        // 0x10e17c: 0xae7101b0  sw          $s1, 0x1B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E180u;
        goto label_10e180;
    }
    ctx->pc = 0x10E178u;
    {
        const bool branch_taken_0x10e178 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E178u;
        // 0x10e17c: 0xae7101b0  sw          $s1, 0x1B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e178) {
            ctx->pc = 0x10E1C8u;
            return;
        }
    }
    ctx->pc = 0x10E180u;
label_10e180:
    // 0x10e180: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x10e180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10e184:
    // 0x10e184: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10e184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e188:
    // 0x10e188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e18c:
    // 0x10e18c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x10e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_10e190:
    // 0x10e190: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x10e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_10e194:
    // 0x10e194: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e198:
    // 0x10e198: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e19c:
    // 0x10e19c: 0x60f809  jalr        $v1
label_10e1a0:
    if (ctx->pc == 0x10E1A0u) {
        ctx->pc = 0x10E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E19Cu;
        // 0x10e1a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1A4u;
        goto label_10e1a4;
    }
    ctx->pc = 0x10E19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E1A4u);
        ctx->pc = 0x10E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E19Cu;
        // 0x10e1a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E19Cu, 0x10E1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E1A4u;
label_10e1a4:
    // 0x10e1a4: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_10e1a8:
    if (ctx->pc == 0x10E1A8u) {
        ctx->pc = 0x10E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1A4u;
        // 0x10e1a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1ACu;
        goto label_10e1ac;
    }
    ctx->pc = 0x10E1A4u;
    {
        const bool branch_taken_0x10e1a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1A4u;
        // 0x10e1a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1a4) {
            ctx->pc = 0x10E1C8u;
            return;
        }
    }
    ctx->pc = 0x10E1ACu;
label_10e1ac:
    // 0x10e1ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10e1b0:
    // 0x10e1b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10e1b4:
    // 0x10e1b4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x10e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_10e1b8:
    // 0x10e1b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e1bc:
    // 0x10e1bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e1c0:
    // 0x10e1c0: 0x60f809  jalr        $v1
label_10e1c4:
    if (ctx->pc == 0x10E1C4u) {
        ctx->pc = 0x10E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1C0u;
        // 0x10e1c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1C8u;
        goto label_fallthrough_0x10e1c0;
    }
    ctx->pc = 0x10E1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E1C8u);
        ctx->pc = 0x10E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1C0u;
        // 0x10e1c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E1C0u, 0x10E1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10e1c0:
    ctx->pc = 0x10E1C8u;
}
