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

// Function: entry_0014f3e8
// Address: 0x14f3e8 - 0x14f468
void entry_0014f3e8_0x14f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f3e8_0x14f3e8");
#endif

    ctx->pc = 0x14f3e8u;

    // 0x14f3e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x14f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14f3ec: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14F3ECu;
    {
        const bool branch_taken_0x14f3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3ECu;
        // 0x14f3f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3ec) {
            ctx->pc = 0x14F4B8u;
            return;
        }
    }
    ctx->pc = 0x14F3F4u;
    // 0x14f3f4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3F4u;
        // 0x14f3f8: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F4B8u;
            return;
        }
    }
    ctx->pc = 0x14F3FCu;
    // 0x14f3fc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14f400: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14F400u;
    {
        const bool branch_taken_0x14f400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F400u;
        // 0x14f404: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f400) {
            ctx->pc = 0x14F4B8u;
            return;
        }
    }
    ctx->pc = 0x14F408u;
    // 0x14f408: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x14f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f40c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x14f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x14f410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f414: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F414u;
    {
        const bool branch_taken_0x14f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F414u;
        // 0x14f418: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f414) {
            ctx->pc = 0x14F478u;
            return;
        }
    }
    ctx->pc = 0x14F41Cu;
    // 0x14f41c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x14f41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f420: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f424: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x14f424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14f428: 0x54a00024  bnel        $a1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x14F428u;
    {
        const bool branch_taken_0x14f428 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f428) {
            ctx->pc = 0x14F42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F428u;
            // 0x14f42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4BCu;
            return;
        }
    }
    ctx->pc = 0x14F430u;
    // 0x14f430: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14f434: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14F434u;
    {
        const bool branch_taken_0x14f434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f434) {
            ctx->pc = 0x14F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F434u;
            // 0x14f438: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F468u;
            return;
        }
    }
    ctx->pc = 0x14F43Cu;
    // 0x14f43c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x14f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x14f440: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F440u;
    {
        const bool branch_taken_0x14f440 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F440u;
        // 0x14f444: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f440) {
            ctx->pc = 0x14F4ACu;
            return;
        }
    }
    ctx->pc = 0x14F448u;
    // 0x14f448: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x14f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14f44c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F44Cu;
    {
        const bool branch_taken_0x14f44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f44c) {
            ctx->pc = 0x14F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F44Cu;
            // 0x14f450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4BCu;
            return;
        }
    }
    ctx->pc = 0x14F454u;
    // 0x14f454: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f458: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x14f458u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x14f45c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f460: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F460u;
    {
        const bool branch_taken_0x14f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F460u;
        // 0x14f464: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f460) {
            ctx->pc = 0x14F4ACu;
            return;
        }
    }
    ctx->pc = 0x14F468u;
}
