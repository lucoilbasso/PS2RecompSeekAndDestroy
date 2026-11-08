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

// Function: entry_001564b4
// Address: 0x1564b4 - 0x15650c
void entry_001564b4_0x1564b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001564b4_0x1564b4");
#endif

    switch (ctx->pc) {
        case 0x1564c0u: goto label_1564c0;
        default: break;
    }

    ctx->pc = 0x1564b4u;

    // 0x1564b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1564b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564b8: 0xc0558ca  jal         func_156328
    ctx->pc = 0x1564B8u;
    SET_GPR_U32(ctx, 31, 0x1564C0u);
    ctx->pc = 0x1564BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564B8u;
    // 0x1564bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156328u, 0x1564B8u, 0x1564C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564C0u;
label_1564c0:
    // 0x1564c0: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x1564c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1564c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1564c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1564c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1564cc: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1564ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1564d0: 0x461826  xor         $v1, $v0, $a2
    ctx->pc = 0x1564d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x1564d4: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1564d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1564d8: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1564d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1564dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1564dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1564e0: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1564e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1564e4: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x1564e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1564e8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1564E8u;
    {
        const bool branch_taken_0x1564e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564E8u;
        // 0x1564ec: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564e8) {
            ctx->pc = 0x15650Cu;
            return;
        }
    }
    ctx->pc = 0x1564F0u;
    // 0x1564f0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1564f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1564f4: 0x461826  xor         $v1, $v0, $a2
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x1564f8: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1564f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1564fc: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x156500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156504: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x156504u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x156508: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x156508u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15650cu;
}
