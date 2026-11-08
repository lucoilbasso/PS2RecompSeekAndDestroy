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

// Function: _Balloc
// Address: 0x1d5320 - 0x1d53c4
void ps2__Balloc_0x1d5320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Balloc_0x1d5320");
#endif

    switch (ctx->pc) {
        case 0x1d534cu: goto label_1d534c;
        case 0x1d5390u: goto label_1d5390;
        default: break;
    }

    ctx->pc = 0x1d5320u;

    // 0x1d5320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d532c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5338: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1d5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d533c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D533Cu;
    {
        const bool branch_taken_0x1d533c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D533Cu;
        // 0x1d5340: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d533c) {
            ctx->pc = 0x1D5358u;
            goto label_1d5358;
        }
    }
    ctx->pc = 0x1D5344u;
    // 0x1d5344: 0xc075964  jal         func_1D6590
    ctx->pc = 0x1D5344u;
    SET_GPR_U32(ctx, 31, 0x1D534Cu);
    ctx->pc = 0x1D5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5344u;
    // 0x1d5348: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1D5344u, 0x1D534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D534Cu;
label_1d534c:
    // 0x1d534c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d534cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5350: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D5350u;
    {
        const bool branch_taken_0x1d5350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5350u;
        // 0x1d5354: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5350) {
            ctx->pc = 0x1D53B0u;
            goto label_1d53b0;
        }
    }
    ctx->pc = 0x1D5358u;
label_1d5358:
    // 0x1d5358: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d535c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5360: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5364: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5364u;
    {
        const bool branch_taken_0x1d5364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5364u;
        // 0x1d5368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5364) {
            ctx->pc = 0x1D5378u;
            goto label_1d5378;
        }
    }
    ctx->pc = 0x1D536Cu;
    // 0x1d536c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5370: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D5370u;
    {
        const bool branch_taken_0x1d5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5370u;
        // 0x1d5374: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5370) {
            ctx->pc = 0x1D53A4u;
            goto label_1d53a4;
        }
    }
    ctx->pc = 0x1D5378u;
label_1d5378:
    // 0x1d5378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d537c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d5380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5384: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5388: 0xc075964  jal         func_1D6590
    ctx->pc = 0x1D5388u;
    SET_GPR_U32(ctx, 31, 0x1D5390u);
    ctx->pc = 0x1D538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5388u;
    // 0x1d538c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1D5388u, 0x1D5390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5390u;
label_1d5390:
    // 0x1d5390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5394: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5394u;
    {
        const bool branch_taken_0x1d5394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5394) {
            ctx->pc = 0x1D5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5394u;
            // 0x1d5398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53B4u;
            goto label_1d53b4;
        }
    }
    ctx->pc = 0x1D539Cu;
    // 0x1d539c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x1d539cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x1d53a0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1d53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_1d53a4:
    // 0x1d53a4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1d53a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d53a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d53acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1d53b0:
    // 0x1d53b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d53b4:
    // 0x1d53b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d53b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d53b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53BCu;
        // 0x1d53c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53C4u;
}
