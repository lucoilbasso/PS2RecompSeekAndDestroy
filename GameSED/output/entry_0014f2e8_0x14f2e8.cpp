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

// Function: entry_0014f2e8
// Address: 0x14f2e8 - 0x14f368
void entry_0014f2e8_0x14f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f2e8_0x14f2e8");
#endif

    ctx->pc = 0x14f2e8u;

    // 0x14f2e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14f2ec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14F2ECu;
    {
        const bool branch_taken_0x14f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2ECu;
        // 0x14f2f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2ec) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F2F4u;
    // 0x14f2f4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14F2F4u;
    {
        const bool branch_taken_0x14f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2F4u;
        // 0x14f2f8: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2f4) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F2FCu;
    // 0x14f2fc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14f300: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x14F300u;
    {
        const bool branch_taken_0x14f300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F300u;
        // 0x14f304: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f300) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F308u;
    // 0x14f308: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f30c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x14f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x14f310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f314: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F314u;
    {
        const bool branch_taken_0x14f314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F314u;
        // 0x14f318: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f314) {
            ctx->pc = 0x14F378u;
            return;
        }
    }
    ctx->pc = 0x14F31Cu;
    // 0x14f31c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x14f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f320: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f324: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x14f324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14f328: 0x54a00020  bnel        $a1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F328u;
            // 0x14f32c: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F3ACu;
            return;
        }
    }
    ctx->pc = 0x14F330u;
    // 0x14f330: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14f334: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14F334u;
    {
        const bool branch_taken_0x14f334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f334) {
            ctx->pc = 0x14F338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F334u;
            // 0x14f338: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F368u;
            return;
        }
    }
    ctx->pc = 0x14F33Cu;
    // 0x14f33c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x14f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x14f340: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F340u;
    {
        const bool branch_taken_0x14f340 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F340u;
        // 0x14f344: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f340) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F348u;
    // 0x14f348: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x14f348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14f34c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F34Cu;
    {
        const bool branch_taken_0x14f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F34Cu;
        // 0x14f350: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f34c) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F354u;
    // 0x14f354: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x14f354u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x14f358: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f35c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F35Cu;
    {
        const bool branch_taken_0x14f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F35Cu;
        // 0x14f360: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f35c) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F364u;
    // 0x14f364: 0x0  nop
    ctx->pc = 0x14f364u;
    // NOP
    ctx->pc = 0x14f368u;
}
