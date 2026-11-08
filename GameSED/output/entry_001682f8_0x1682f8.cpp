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

// Function: entry_001682f8
// Address: 0x1682f8 - 0x168340
void entry_001682f8_0x1682f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001682f8_0x1682f8");
#endif

    ctx->pc = 0x1682f8u;

    // 0x1682f8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1682fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1682fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168300: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168304: 0xafb60200  sw          $s6, 0x200($sp)
    ctx->pc = 0x168304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 22));
    // 0x168308: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16830c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168310: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x168310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168314: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168318: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16831c: 0xafb30204  sw          $s3, 0x204($sp)
    ctx->pc = 0x16831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 19));
    // 0x168320: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x168324: 0xc7948404  lwc1        $f20, -0x7BFC($gp)
    ctx->pc = 0x168324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168328: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x168328u;
    {
        const bool branch_taken_0x168328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168328u;
        // 0x16832c: 0x24b10030  addiu       $s1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168328) {
            ctx->pc = 0x168524u;
            return;
        }
    }
    ctx->pc = 0x168330u;
    // 0x168330: 0xc7958408  lwc1        $f21, -0x7BF8($gp)
    ctx->pc = 0x168330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168334: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168338: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16833c: 0x0  nop
    ctx->pc = 0x16833cu;
    // NOP
    ctx->pc = 0x168340u;
}
