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

// Function: entry_00181a10
// Address: 0x181a10 - 0x181a38
void entry_00181a10_0x181a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181a10_0x181a10");
#endif

    ctx->pc = 0x181a10u;

    // 0x181a10: 0x95040002  lhu         $a0, 0x2($t0)
    ctx->pc = 0x181a10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x181a14: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x181a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a18: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x181a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x181a1c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x181A1Cu;
    {
        const bool branch_taken_0x181a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A1Cu;
        // 0x181a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a1c) {
            ctx->pc = 0x181B94u;
            return;
        }
    }
    ctx->pc = 0x181A24u;
    // 0x181a24: 0xc7858570  lwc1        $f5, -0x7A90($gp)
    ctx->pc = 0x181a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x181a28: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x181a28u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a2c: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x181a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x181a30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x181a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x181a34: 0xc7838574  lwc1        $f3, -0x7A8C($gp)
    ctx->pc = 0x181a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    ctx->pc = 0x181a38u;
}
