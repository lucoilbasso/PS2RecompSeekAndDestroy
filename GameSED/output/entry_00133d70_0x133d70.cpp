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

// Function: entry_00133d70
// Address: 0x133d70 - 0x133d90
void entry_00133d70_0x133d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d70_0x133d70");
#endif

    ctx->pc = 0x133d70u;

    // 0x133d70: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x133d74: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x133d78: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x133d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x133d7c: 0x506200c9  beql        $v1, $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x133D7Cu;
    {
        const bool branch_taken_0x133d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d7c) {
            ctx->pc = 0x133D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D7Cu;
            // 0x133d80: 0xe6740268  swc1        $f20, 0x268($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 616), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133D84u;
    // 0x133d84: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x133D84u;
    {
        const bool branch_taken_0x133d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D84u;
        // 0x133d88: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d84) {
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133D8Cu;
    // 0x133d8c: 0x0  nop
    ctx->pc = 0x133d8cu;
    // NOP
    ctx->pc = 0x133d90u;
}
