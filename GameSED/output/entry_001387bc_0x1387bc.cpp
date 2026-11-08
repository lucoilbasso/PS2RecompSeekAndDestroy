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

// Function: entry_001387bc
// Address: 0x1387bc - 0x1387f0
void entry_001387bc_0x1387bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001387bc_0x1387bc");
#endif

    ctx->pc = 0x1387bcu;

    // 0x1387bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1387bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1387c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1387c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1387c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1387c8: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1387C8u;
    {
        const bool branch_taken_0x1387c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C8u;
        // 0x1387cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387c8) {
            ctx->pc = 0x1388D4u;
            return;
        }
    }
    ctx->pc = 0x1387D0u;
    // 0x1387d0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1387d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1387d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1387d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1387d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1387dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1387dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1387e0: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x1387e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1387e4: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x1387e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1387e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1387e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387ec: 0x0  nop
    ctx->pc = 0x1387ecu;
    // NOP
    ctx->pc = 0x1387f0u;
}
