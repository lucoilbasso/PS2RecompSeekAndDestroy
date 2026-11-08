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

// Function: entry_0013f5a8
// Address: 0x13f5a8 - 0x13f608
void entry_0013f5a8_0x13f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f5a8_0x13f5a8");
#endif

    switch (ctx->pc) {
        case 0x13f5c8u: goto label_13f5c8;
        default: break;
    }

    ctx->pc = 0x13f5a8u;

    // 0x13f5a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13f5ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13f5b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13f5b4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13f5b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13f5bc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x13f5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13f5c0: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x13F5C0u;
    SET_GPR_U32(ctx, 31, 0x13F5C8u);
    ctx->pc = 0x13F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5C0u;
    // 0x13f5c4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x13F5C0u, 0x13F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5C8u;
label_13f5c8:
    // 0x13f5c8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x13f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f5cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5d0: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x13f5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x13f5d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F5D4u;
    {
        const bool branch_taken_0x13f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5D4u;
        // 0x13f5d8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5d4) {
            ctx->pc = 0x13F608u;
            return;
        }
    }
    ctx->pc = 0x13F5DCu;
    // 0x13f5dc: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f5e0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x13f5e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f5e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13f5e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f5ec: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x13f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x13f5f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x13f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13f5f4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x13f5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13f5f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13f5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f5fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13F5FCu;
    {
        const bool branch_taken_0x13f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5FCu;
        // 0x13f600: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5fc) {
            ctx->pc = 0x13F6B8u;
            return;
        }
    }
    ctx->pc = 0x13F604u;
    // 0x13f604: 0x0  nop
    ctx->pc = 0x13f604u;
    // NOP
    ctx->pc = 0x13f608u;
}
