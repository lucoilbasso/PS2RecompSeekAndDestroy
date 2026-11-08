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

// Function: entry_0018d3f8
// Address: 0x18d3f8 - 0x18d440
void entry_0018d3f8_0x18d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d3f8_0x18d3f8");
#endif

    ctx->pc = 0x18d3f8u;

    // 0x18d3f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d3f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d3fc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d400: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x18d404: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d408: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x18d408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d40c: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x18d410: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x18d410u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18d414: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d418: 0x8e240218  lw          $a0, 0x218($s1)
    ctx->pc = 0x18d418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x18d41c: 0x8e25021c  lw          $a1, 0x21C($s1)
    ctx->pc = 0x18d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18d420: 0x34560080  ori         $s6, $v0, 0x80
    ctx->pc = 0x18d420u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x18d424: 0x8cd50010  lw          $s5, 0x10($a2)
    ctx->pc = 0x18d424u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18d428: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x18d428u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18d42c: 0x16c70004  bne         $s6, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D42Cu;
    {
        const bool branch_taken_0x18d42c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 7));
        ctx->pc = 0x18D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D42Cu;
        // 0x18d430: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d42c) {
            ctx->pc = 0x18D440u;
            return;
        }
    }
    ctx->pc = 0x18D434u;
    // 0x18d434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d438: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18D438u;
    {
        const bool branch_taken_0x18d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D438u;
        // 0x18d43c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d438) {
            ctx->pc = 0x18D480u;
            return;
        }
    }
    ctx->pc = 0x18D440u;
}
