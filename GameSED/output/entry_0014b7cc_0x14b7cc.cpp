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

// Function: entry_0014b7cc
// Address: 0x14b7cc - 0x14b830
void entry_0014b7cc_0x14b7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b7cc_0x14b7cc");
#endif

    ctx->pc = 0x14b7ccu;

    // 0x14b7cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x14b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14b7d0: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x14b7d4: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x14b7d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b7dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14b7e0: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x14b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x14b7e4: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x14b7e8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x14b7e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14b7ec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x14b7f0: 0xc6000144  lwc1        $f0, 0x144($s0)
    ctx->pc = 0x14b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b7f4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b7f8: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x14b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b7fc: 0xae110130  sw          $s1, 0x130($s0)
    ctx->pc = 0x14b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
    // 0x14b800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14b804: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x14b804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x14b808: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x14b808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b80c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x14b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x14b810: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14b814: 0x3063c800  andi        $v1, $v1, 0xC800
    ctx->pc = 0x14b814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)51200);
    // 0x14b818: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B818u;
    {
        const bool branch_taken_0x14b818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B818u;
        // 0x14b81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b818) {
            ctx->pc = 0x14B830u;
            return;
        }
    }
    ctx->pc = 0x14B820u;
    // 0x14b820: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14b824: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14b828: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B828u;
    {
        const bool branch_taken_0x14b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b828) {
            ctx->pc = 0x14B834u;
            return;
        }
    }
    ctx->pc = 0x14B830u;
}
