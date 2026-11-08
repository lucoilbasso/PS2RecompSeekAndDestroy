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

// Function: $L17
// Address: 0x1d0dfc - 0x1d0e58
void ps2__L17_0x1d0dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L17_0x1d0dfc");
#endif

    ctx->pc = 0x1d0dfcu;

    // 0x1d0dfc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D0DFCu;
    {
        const bool branch_taken_0x1d0dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0dfc) {
            ctx->pc = 0x1D0E90u;
            return;
        }
    }
    ctx->pc = 0x1D0E04u;
    // 0x1d0e04: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1d0e04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0e08: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x1d0e08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x1d0e0c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x1d0e0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x1d0e10: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1d0e10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1d0e14: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x1d0e14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x1d0e18: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1d0e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1d0e1c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x1d0e1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x1d0e20: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x1d0e20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x1d0e24: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x1d0e24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1d0e28: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1d0e28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1d0e2c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x1d0e2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1d0e30: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1d0e30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1d0e34: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x1d0e34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1d0e38: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x1d0e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x1d0e3c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1d0e3cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1d0e40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0e44: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1d0e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1d0e48: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0E48u;
    {
        const bool branch_taken_0x1d0e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E48u;
        // 0x1d0e4c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e48) {
            ctx->pc = 0x1D0E8Cu;
            return;
        }
    }
    ctx->pc = 0x1D0E50u;
    // 0x1d0e50: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1d0e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0e54: 0x0  nop
    ctx->pc = 0x1d0e54u;
    // NOP
    ctx->pc = 0x1d0e58u;
}
