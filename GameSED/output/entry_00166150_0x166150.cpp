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

// Function: entry_00166150
// Address: 0x166150 - 0x1661a0
void entry_00166150_0x166150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166150_0x166150");
#endif

    switch (ctx->pc) {
        case 0x166194u: goto label_166194;
        default: break;
    }

    ctx->pc = 0x166150u;

    // 0x166150: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x166150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166154: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x166154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x166158: 0xc7818374  lwc1        $f1, -0x7C8C($gp)
    ctx->pc = 0x166158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16615c: 0xae020c04  sw          $v0, 0xC04($s0)
    ctx->pc = 0x16615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    // 0x166160: 0xc7808378  lwc1        $f0, -0x7C88($gp)
    ctx->pc = 0x166160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166164: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x166164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x166168: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x166168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16616c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16616cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x166170: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x166174: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166174u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x166178: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166178u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16617c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16617cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x166180: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x166184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166188: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16618c: 0xc059478  jal         func_1651E0
    ctx->pc = 0x16618Cu;
    SET_GPR_U32(ctx, 31, 0x166194u);
    ctx->pc = 0x166190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16618Cu;
    // 0x166190: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651E0u, 0x16618Cu, 0x166194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166194u;
label_166194:
    // 0x166194: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x166194u;
    {
        const bool branch_taken_0x166194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166194u;
        // 0x166198: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166194) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x16619Cu;
    // 0x16619c: 0x0  nop
    ctx->pc = 0x16619cu;
    // NOP
    ctx->pc = 0x1661a0u;
}
