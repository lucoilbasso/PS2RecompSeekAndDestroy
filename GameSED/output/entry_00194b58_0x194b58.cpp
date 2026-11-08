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

// Function: entry_00194b58
// Address: 0x194b58 - 0x194b7c
void entry_00194b58_0x194b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194b58_0x194b58");
#endif

    ctx->pc = 0x194b58u;

    // 0x194b58: 0xdec20030  ld          $v0, 0x30($s6)
    ctx->pc = 0x194b58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x194b5c: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x194B5Cu;
    {
        const bool branch_taken_0x194b5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B5Cu;
        // 0x194b60: 0xfe220220  sd          $v0, 0x220($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b5c) {
            ctx->pc = 0x194B7Cu;
            return;
        }
    }
    ctx->pc = 0x194B64u;
    // 0x194b64: 0xc6e10154  lwc1        $f1, 0x154($s7)
    ctx->pc = 0x194b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b68: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x194b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194b74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194b78: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x194b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    ctx->pc = 0x194b7cu;
}
