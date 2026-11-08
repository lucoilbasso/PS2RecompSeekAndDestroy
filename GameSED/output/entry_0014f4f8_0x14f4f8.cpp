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

// Function: entry_0014f4f8
// Address: 0x14f4f8 - 0x14f578
void entry_0014f4f8_0x14f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4f8_0x14f4f8");
#endif

    ctx->pc = 0x14f4f8u;

    // 0x14f4f8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14f4fc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14F4FCu;
    {
        const bool branch_taken_0x14f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4FCu;
        // 0x14f500: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4fc) {
            ctx->pc = 0x14F5C8u;
            return;
        }
    }
    ctx->pc = 0x14F504u;
    // 0x14f504: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14F504u;
    {
        const bool branch_taken_0x14f504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F504u;
        // 0x14f508: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f504) {
            ctx->pc = 0x14F5C8u;
            return;
        }
    }
    ctx->pc = 0x14F50Cu;
    // 0x14f50c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14f510: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14F510u;
    {
        const bool branch_taken_0x14f510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F510u;
        // 0x14f514: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f510) {
            ctx->pc = 0x14F5C8u;
            return;
        }
    }
    ctx->pc = 0x14F518u;
    // 0x14f518: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f51c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x14f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x14f520: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f524: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F524u;
    {
        const bool branch_taken_0x14f524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F524u;
        // 0x14f528: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f524) {
            ctx->pc = 0x14F588u;
            return;
        }
    }
    ctx->pc = 0x14F52Cu;
    // 0x14f52c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x14f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f530: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f534: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x14f534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14f538: 0x54a00024  bnel        $a1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x14F538u;
    {
        const bool branch_taken_0x14f538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f538) {
            ctx->pc = 0x14F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F538u;
            // 0x14f53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5CCu;
            return;
        }
    }
    ctx->pc = 0x14F540u;
    // 0x14f540: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14f544: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14F544u;
    {
        const bool branch_taken_0x14f544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f544) {
            ctx->pc = 0x14F548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F544u;
            // 0x14f548: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F578u;
            return;
        }
    }
    ctx->pc = 0x14F54Cu;
    // 0x14f54c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x14f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x14f550: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F550u;
    {
        const bool branch_taken_0x14f550 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F550u;
        // 0x14f554: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f550) {
            ctx->pc = 0x14F5BCu;
            return;
        }
    }
    ctx->pc = 0x14F558u;
    // 0x14f558: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x14f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14f55c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F55Cu;
    {
        const bool branch_taken_0x14f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f55c) {
            ctx->pc = 0x14F560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F55Cu;
            // 0x14f560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5CCu;
            return;
        }
    }
    ctx->pc = 0x14F564u;
    // 0x14f564: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f568: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x14f568u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x14f56c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f570: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F570u;
    {
        const bool branch_taken_0x14f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F570u;
        // 0x14f574: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f570) {
            ctx->pc = 0x14F5BCu;
            return;
        }
    }
    ctx->pc = 0x14F578u;
}
