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

// Function: entry_001406e0
// Address: 0x1406e0 - 0x140770
void entry_001406e0_0x1406e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001406e0_0x1406e0");
#endif

    switch (ctx->pc) {
        case 0x140740u: goto label_140740;
        default: break;
    }

    ctx->pc = 0x1406e0u;

    // 0x1406e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1406e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1406e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1406e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1406e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1406e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1406ec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1406ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1406f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1406f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1406f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1406f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1406f8: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x1406f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1406fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1406fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140700: 0xc66101a4  lwc1        $f1, 0x1A4($s3)
    ctx->pc = 0x140700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140704: 0xc66001a8  lwc1        $f0, 0x1A8($s3)
    ctx->pc = 0x140704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140708: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x140708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14070c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14070cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x140710: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x140710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x140714: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x140714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x140718: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x140718u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14071c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14071cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x140720: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x140720u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x140724: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x140724u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x140728: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x140728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x14072c: 0x8e660084  lw          $a2, 0x84($s3)
    ctx->pc = 0x14072cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x140730: 0x24f02620  addiu       $s0, $a3, 0x2620
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 9760));
    // 0x140734: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140738: 0xc06760e  jal         func_19D838
    ctx->pc = 0x140738u;
    SET_GPR_U32(ctx, 31, 0x140740u);
    ctx->pc = 0x14073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140738u;
    // 0x14073c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x140738u, 0x140740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140740u;
label_140740:
    // 0x140740: 0x8e760060  lw          $s6, 0x60($s3)
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x140744: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x140748: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x140748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x14074c: 0x24522610  addiu       $s2, $v0, 0x2610
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x140750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140754: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x140758: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x140758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14075c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x14075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x140760: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140760u;
    {
        const bool branch_taken_0x140760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140760u;
        // 0x140764: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140760) {
            ctx->pc = 0x140770u;
            return;
        }
    }
    ctx->pc = 0x140768u;
    // 0x140768: 0xc061920  jal         func_186480
    ctx->pc = 0x140768u;
    SET_GPR_U32(ctx, 31, 0x140770u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x140768u, 0x140770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140770u;
}
