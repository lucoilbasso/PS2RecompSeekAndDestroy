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

// Function: entry_0018f6e8
// Address: 0x18f6e8 - 0x18f720
void entry_0018f6e8_0x18f6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f6e8_0x18f6e8");
#endif

    ctx->pc = 0x18f6e8u;

    // 0x18f6e8: 0x9602015a  lhu         $v0, 0x15A($s0)
    ctx->pc = 0x18f6e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 346)));
    // 0x18f6ec: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F6ECu;
    {
        const bool branch_taken_0x18f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6ECu;
        // 0x18f6f0: 0xae070170  sw          $a3, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6ec) {
            ctx->pc = 0x18F730u;
            return;
        }
    }
    ctx->pc = 0x18F6F4u;
    // 0x18f6f4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x18f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x18f6f8: 0xdc43d610  ld          $v1, -0x29F0($v0)
    ctx->pc = 0x18f6f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x25D610u));
    // 0x18f6fc: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x18f6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x18f700: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x18f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x18f704: 0x8e0301d0  lw          $v1, 0x1D0($s0)
    ctx->pc = 0x18f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x18f708: 0xdc44d618  ld          $a0, -0x29E8($v0)
    ctx->pc = 0x18f708u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x25D618u));
    // 0x18f70c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x18f70cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x18f710: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x18f710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x18f714: 0x8e0401d0  lw          $a0, 0x1D0($s0)
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x18f718: 0xdc62d620  ld          $v0, -0x29E0($v1)
    ctx->pc = 0x18f718u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x25D620u));
    // 0x18f71c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x18f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    ctx->pc = 0x18f720u;
}
