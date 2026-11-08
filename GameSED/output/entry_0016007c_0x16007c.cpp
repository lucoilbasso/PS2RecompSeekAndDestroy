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

// Function: entry_0016007c
// Address: 0x16007c - 0x160100
void entry_0016007c_0x16007c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016007c_0x16007c");
#endif

    switch (ctx->pc) {
        case 0x1600b8u: goto label_1600b8;
        case 0x1600d4u: goto label_1600d4;
        default: break;
    }

    ctx->pc = 0x16007cu;

label_16007c:
    // 0x16007c: 0x24110082  addiu       $s1, $zero, 0x82
    ctx->pc = 0x16007cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_160080:
    // 0x160080: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_160084:
    // 0x160084: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_160088:
    // 0x160088: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x160088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_16008c:
    // 0x16008c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160090:
    // 0x160090: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x160090u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_160094:
    // 0x160094: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160098:
    // 0x160098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16009c:
    // 0x16009c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x16009cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1600a0:
    // 0x1600a0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1600a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1600a4:
    // 0x1600a4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1600a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1600a8:
    // 0x1600a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1600a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1600ac:
    // 0x1600ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1600b0:
    // 0x1600b0: 0x60f809  jalr        $v1
label_1600b4:
    if (ctx->pc == 0x1600B4u) {
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600B8u;
        goto label_1600b8;
    }
    ctx->pc = 0x1600B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1600B8u);
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1600B0u, 0x1600B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1600B8u;
label_1600b8:
    // 0x1600b8: 0x8e650f28  lw          $a1, 0xF28($s3)
    ctx->pc = 0x1600b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3880)));
label_1600bc:
    // 0x1600bc: 0x8e660f2c  lw          $a2, 0xF2C($s3)
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
label_1600c0:
    // 0x1600c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1600c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1600c4:
    // 0x1600c4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1600c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1600c8:
    // 0x1600c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1600c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1600cc:
    // 0x1600cc: 0xc061344  jal         func_184D10
label_1600d0:
    if (ctx->pc == 0x1600D0u) {
        ctx->pc = 0x1600D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600CCu;
        // 0x1600d0: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600D4u;
        goto label_1600d4;
    }
    ctx->pc = 0x1600CCu;
    SET_GPR_U32(ctx, 31, 0x1600D4u);
    ctx->pc = 0x1600D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600CCu;
    // 0x1600d0: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x1600CCu, 0x1600D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600D4u;
label_1600d4:
    // 0x1600d4: 0x8e630f20  lw          $v1, 0xF20($s3)
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
label_1600d8:
    // 0x1600d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1600dc:
    // 0x1600dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_1600e0:
    if (ctx->pc == 0x1600E0u) {
        ctx->pc = 0x1600E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600DCu;
        // 0x1600e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600E4u;
        goto label_1600e4;
    }
    ctx->pc = 0x1600DCu;
    {
        const bool branch_taken_0x1600dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1600E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600DCu;
        // 0x1600e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600dc) {
            ctx->pc = 0x160168u;
            return;
        }
    }
    ctx->pc = 0x1600E4u;
label_1600e4:
    // 0x1600e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1600e8:
    if (ctx->pc == 0x1600E8u) {
        ctx->pc = 0x1600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E4u;
        // 0x1600e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600ECu;
        goto label_1600ec;
    }
    ctx->pc = 0x1600E4u;
    {
        const bool branch_taken_0x1600e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E4u;
        // 0x1600e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600e4) {
            ctx->pc = 0x160100u;
            return;
        }
    }
    ctx->pc = 0x1600ECu;
label_1600ec:
    // 0x1600ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1600ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1600f0:
    // 0x1600f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1600f4:
    if (ctx->pc == 0x1600F4u) {
        ctx->pc = 0x1600F8u;
        goto label_1600f8;
    }
    ctx->pc = 0x1600F0u;
    {
        const bool branch_taken_0x1600f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1600f0) {
            ctx->pc = 0x160110u;
            return;
        }
    }
    ctx->pc = 0x1600F8u;
label_1600f8:
    // 0x1600f8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1600fc:
    if (ctx->pc == 0x1600FCu) {
        ctx->pc = 0x1600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F8u;
        // 0x1600fc: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160100u;
        goto label_fallthrough_0x1600f8;
    }
    ctx->pc = 0x1600F8u;
    {
        const bool branch_taken_0x1600f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F8u;
        // 0x1600fc: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f8) {
            ctx->pc = 0x1601E0u;
            return;
        }
    }
label_fallthrough_0x1600f8:
    ctx->pc = 0x160100u;
}
