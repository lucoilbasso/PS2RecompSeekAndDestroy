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

// Function: entry_001d231c
// Address: 0x1d231c - 0x1d2348
void entry_001d231c_0x1d231c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d231c_0x1d231c");
#endif

    ctx->pc = 0x1d231cu;

    // 0x1d231c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2320: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d2324: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D2324u;
    {
        const bool branch_taken_0x1d2324 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2324u;
        // 0x1d2328: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2324) {
            ctx->pc = 0x1D23F8u;
            return;
        }
    }
    ctx->pc = 0x1D232Cu;
    // 0x1d232c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2330: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2330u;
    {
        const bool branch_taken_0x1d2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2330u;
        // 0x1d2334: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2330) {
            ctx->pc = 0x1D23A8u;
            return;
        }
    }
    ctx->pc = 0x1D2338u;
    // 0x1d2338: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d2338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d233c: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d233cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2340: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1d2344: 0x0  nop
    ctx->pc = 0x1d2344u;
    // NOP
    ctx->pc = 0x1d2348u;
}
