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

// Function: entry_0016d840
// Address: 0x16d840 - 0x16d89c
void entry_0016d840_0x16d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d840_0x16d840");
#endif

    switch (ctx->pc) {
        case 0x16d848u: goto label_16d848;
        case 0x16d870u: goto label_16d870;
        case 0x16d888u: goto label_16d888;
        default: break;
    }

    ctx->pc = 0x16d840u;

    // 0x16d840: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D840u;
    SET_GPR_U32(ctx, 31, 0x16D848u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D840u, 0x16D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D848u;
label_16d848:
    // 0x16d848: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16d848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d84c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x16d84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d850: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x16d850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d854: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d858: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d858u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d85c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d85cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d860: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d860u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d864: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d868: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D868u;
    SET_GPR_U32(ctx, 31, 0x16D870u);
    ctx->pc = 0x16D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D868u;
    // 0x16d86c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D868u, 0x16D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x16d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x16d874: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x16d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x16d878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d87c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d880: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D880u;
    SET_GPR_U32(ctx, 31, 0x16D888u);
    ctx->pc = 0x16D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D880u;
    // 0x16d884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D880u, 0x16D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D888u;
label_16d888:
    // 0x16d888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d88c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D88Cu;
    {
        const bool branch_taken_0x16d88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D88Cu;
        // 0x16d890: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d88c) {
            ctx->pc = 0x16D89Cu;
            return;
        }
    }
    ctx->pc = 0x16D894u;
    // 0x16d894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d898: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x16d89cu;
}
