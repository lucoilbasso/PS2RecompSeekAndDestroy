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

// Function: entry_001925ac
// Address: 0x1925ac - 0x1925f8
void entry_001925ac_0x1925ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001925ac_0x1925ac");
#endif

    ctx->pc = 0x1925acu;

    // 0x1925ac: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1925acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1925b0: 0xde220210  ld          $v0, 0x210($s1)
    ctx->pc = 0x1925b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1925b4: 0xde230218  ld          $v1, 0x218($s1)
    ctx->pc = 0x1925b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x1925b8: 0xfe220220  sd          $v0, 0x220($s1)
    ctx->pc = 0x1925b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 544), GPR_U64(ctx, 2));
    // 0x1925bc: 0xfe230228  sd          $v1, 0x228($s1)
    ctx->pc = 0x1925bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 3));
    // 0x1925c0: 0xae2401c0  sw          $a0, 0x1C0($s1)
    ctx->pc = 0x1925c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 4));
    // 0x1925c4: 0xae2401c4  sw          $a0, 0x1C4($s1)
    ctx->pc = 0x1925c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 4));
    // 0x1925c8: 0xc6200270  lwc1        $f0, 0x270($s1)
    ctx->pc = 0x1925c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1925cc: 0xc6210278  lwc1        $f1, 0x278($s1)
    ctx->pc = 0x1925ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1925d0: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x1925d4: 0xc6220280  lwc1        $f2, 0x280($s1)
    ctx->pc = 0x1925d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1925d8: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x1925d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x1925dc: 0x8e73001c  lw          $s3, 0x1C($s3)
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1925e0: 0xe6200274  swc1        $f0, 0x274($s1)
    ctx->pc = 0x1925e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x1925e4: 0xe621027c  swc1        $f1, 0x27C($s1)
    ctx->pc = 0x1925e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
    // 0x1925e8: 0xae22029c  sw          $v0, 0x29C($s1)
    ctx->pc = 0x1925e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 2));
    // 0x1925ec: 0xe6220284  swc1        $f2, 0x284($s1)
    ctx->pc = 0x1925ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    // 0x1925f0: 0x1660fe7d  bnez        $s3, . + 4 + (-0x183 << 2)
    ctx->pc = 0x1925F0u;
    {
        const bool branch_taken_0x1925f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1925F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925F0u;
        // 0x1925f4: 0xae230294  sw          $v1, 0x294($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925f0) {
            ctx->pc = 0x191FE8u;
            return;
        }
    }
    ctx->pc = 0x1925F8u;
}
