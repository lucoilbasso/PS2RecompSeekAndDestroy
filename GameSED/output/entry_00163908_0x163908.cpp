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

// Function: entry_00163908
// Address: 0x163908 - 0x163950
void entry_00163908_0x163908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163908_0x163908");
#endif

    ctx->pc = 0x163908u;

label_163908:
    // 0x163908: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x163908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_16390c:
    // 0x16390c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x16390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_163910:
    // 0x163910: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x163910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_163914:
    // 0x163914: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x163914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_163918:
    // 0x163918: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x163918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_16391c:
    // 0x16391c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x16391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_163920:
    // 0x163920: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x163920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_163924:
    // 0x163924: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_163928:
    // 0x163928: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x163928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16392c:
    // 0x16392c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_163930:
    if (ctx->pc == 0x163930u) {
        ctx->pc = 0x163930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16392Cu;
        // 0x163930: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163934u;
        goto label_163934;
    }
    ctx->pc = 0x16392Cu;
    {
        const bool branch_taken_0x16392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16392Cu;
        // 0x163930: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16392c) {
            ctx->pc = 0x163B94u;
            return;
        }
    }
    ctx->pc = 0x163934u;
label_163934:
    // 0x163934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x163934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_163938:
    // 0x163938: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x163938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16393c:
    // 0x16393c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163940:
    // 0x163940: 0x8c636f50  lw          $v1, 0x6F50($v1)
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28496)));
label_163944:
    // 0x163944: 0x600008  jr          $v1
label_163948:
    if (ctx->pc == 0x163948u) {
        ctx->pc = 0x16394Cu;
        goto label_16394c;
    }
    ctx->pc = 0x163944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16394Cu;
label_16394c:
    // 0x16394c: 0x0  nop
    ctx->pc = 0x16394cu;
    // NOP
    ctx->pc = 0x163950u;
}
