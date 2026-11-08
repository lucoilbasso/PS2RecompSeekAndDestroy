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

// Function: entry_00116318
// Address: 0x116318 - 0x116388
void entry_00116318_0x116318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116318_0x116318");
#endif

    switch (ctx->pc) {
        case 0x116344u: goto label_116344;
        case 0x116354u: goto label_116354;
        default: break;
    }

    ctx->pc = 0x116318u;

    // 0x116318: 0x1237001f  beq         $s1, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x116318u;
    {
        const bool branch_taken_0x116318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x11631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116318u;
        // 0x11631c: 0x118203  sra         $s0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116318) {
            ctx->pc = 0x116398u;
            return;
        }
    }
    ctx->pc = 0x116320u;
    // 0x116320: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x116320u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x116324: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116328: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11632c: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x116330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116334: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116338: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x116338u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11633c: 0xc041882  jal         func_106208
    ctx->pc = 0x11633Cu;
    SET_GPR_U32(ctx, 31, 0x116344u);
    ctx->pc = 0x116340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11633Cu;
    // 0x116340: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11633Cu, 0x116344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116344u;
label_116344:
    // 0x116344: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x116344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116348: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11634c: 0xc041882  jal         func_106208
    ctx->pc = 0x11634Cu;
    SET_GPR_U32(ctx, 31, 0x116354u);
    ctx->pc = 0x116350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11634Cu;
    // 0x116350: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11634Cu, 0x116354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116354u;
label_116354:
    // 0x116354: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x116354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116358: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x116358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11635c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x116360: 0x16a50009  bne         $s5, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x116360u;
    {
        const bool branch_taken_0x116360 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        ctx->pc = 0x116364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116360u;
        // 0x116364: 0x27c4fcb0  addiu       $a0, $fp, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116360) {
            ctx->pc = 0x116388u;
            return;
        }
    }
    ctx->pc = 0x116368u;
    // 0x116368: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x116368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11636c: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x11636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x116370: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x116370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116374: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x116374u;
    {
        const bool branch_taken_0x116374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116374) {
            ctx->pc = 0x116378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116374u;
            // 0x116378: 0xac830400  sw          $v1, 0x400($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116398u;
            return;
        }
    }
    ctx->pc = 0x11637Cu;
    // 0x11637c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11637Cu;
    {
        const bool branch_taken_0x11637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11637Cu;
        // 0x116380: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11637c) {
            ctx->pc = 0x11639Cu;
            return;
        }
    }
    ctx->pc = 0x116384u;
    // 0x116384: 0x0  nop
    ctx->pc = 0x116384u;
    // NOP
    ctx->pc = 0x116388u;
}
