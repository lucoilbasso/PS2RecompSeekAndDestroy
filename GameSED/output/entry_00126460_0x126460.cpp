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

// Function: entry_00126460
// Address: 0x126460 - 0x1264c8
void entry_00126460_0x126460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126460_0x126460");
#endif

    switch (ctx->pc) {
        case 0x126478u: goto label_126478;
        default: break;
    }

    ctx->pc = 0x126460u;

    // 0x126460: 0x24043e80  addiu       $a0, $zero, 0x3E80
    ctx->pc = 0x126460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x126464: 0x1810  mfhi        $v1
    ctx->pc = 0x126464u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x126468: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x126468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12646c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x126470: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x126470u;
    SET_GPR_U32(ctx, 31, 0x126478u);
    ctx->pc = 0x126474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126470u;
    // 0x126474: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x126470u, 0x126478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126478u;
label_126478:
    // 0x126478: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12647c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12647cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126480: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x126480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126488: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x12648c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x126490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x126498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12649c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1264a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1264a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1264a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1264a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1264a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264ac: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1264ACu;
    {
        const bool branch_taken_0x1264ac = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1264B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264ACu;
        // 0x1264b0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264ac) {
            ctx->pc = 0x1264C8u;
            return;
        }
    }
    ctx->pc = 0x1264B4u;
    // 0x1264b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1264b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1264b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1264b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1264bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1264BCu;
    {
        const bool branch_taken_0x1264bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264BCu;
        // 0x1264c0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264bc) {
            ctx->pc = 0x1264D8u;
            return;
        }
    }
    ctx->pc = 0x1264C4u;
    // 0x1264c4: 0x0  nop
    ctx->pc = 0x1264c4u;
    // NOP
    ctx->pc = 0x1264c8u;
}
