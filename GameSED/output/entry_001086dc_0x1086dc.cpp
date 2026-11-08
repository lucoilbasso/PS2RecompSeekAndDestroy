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

// Function: entry_001086dc
// Address: 0x1086dc - 0x108738
void entry_001086dc_0x1086dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001086dc_0x1086dc");
#endif

    ctx->pc = 0x1086dcu;

label_1086dc:
    // 0x1086dc: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1086e0:
    // 0x1086e0: 0x2ce2001d  sltiu       $v0, $a3, 0x1D
    ctx->pc = 0x1086e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_1086e4:
    // 0x1086e4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_1086e8:
    // 0x1086e8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1086e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_1086ec:
    // 0x1086ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1086ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1086f0:
    // 0x1086f0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1086f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_1086f4:
    // 0x1086f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1086f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1086f8:
    // 0x1086f8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1086f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_1086fc:
    // 0x1086fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1086fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108700:
    // 0x108700: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x108700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_108704:
    // 0x108704: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x108704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_108708:
    // 0x108708: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x108708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_10870c:
    // 0x10870c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x10870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_108710:
    // 0x108710: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x108710u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_108714:
    // 0x108714: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x108714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_108718:
    // 0x108718: 0x10400279  beqz        $v0, . + 4 + (0x279 << 2)
label_10871c:
    if (ctx->pc == 0x10871Cu) {
        ctx->pc = 0x10871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108718u;
        // 0x10871c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108720u;
        goto label_108720;
    }
    ctx->pc = 0x108718u;
    {
        const bool branch_taken_0x108718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108718u;
        // 0x10871c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108718) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x108720u;
label_108720:
    // 0x108720: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x108720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_108724:
    // 0x108724: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_108728:
    // 0x108728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10872c:
    // 0x10872c: 0x8c633b60  lw          $v1, 0x3B60($v1)
    ctx->pc = 0x10872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15200)));
label_108730:
    // 0x108730: 0x600008  jr          $v1
label_108734:
    if (ctx->pc == 0x108734u) {
        ctx->pc = 0x108738u;
        goto label_fallthrough_0x108730;
    }
    ctx->pc = 0x108730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x108730:
    ctx->pc = 0x108738u;
}
