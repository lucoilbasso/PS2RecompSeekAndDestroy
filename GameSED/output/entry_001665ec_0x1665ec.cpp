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

// Function: entry_001665ec
// Address: 0x1665ec - 0x166638
void entry_001665ec_0x1665ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001665ec_0x1665ec");
#endif

    ctx->pc = 0x1665ecu;

label_1665ec:
    // 0x1665ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1665ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1665f0:
    // 0x1665f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1665f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1665f4:
    // 0x1665f4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1665f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1665f8:
    // 0x1665f8: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1665f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1665fc:
    // 0x1665fc: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1665fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_166600:
    // 0x166600: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x166600u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_166604:
    // 0x166604: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x166604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_166608:
    // 0x166608: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16660c:
    // 0x16660c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x16660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_166610:
    // 0x166610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166614:
    // 0x166614: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x166614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_166618:
    // 0x166618: 0x10600364  beqz        $v1, . + 4 + (0x364 << 2)
label_16661c:
    if (ctx->pc == 0x16661Cu) {
        ctx->pc = 0x16661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166618u;
        // 0x16661c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166620u;
        goto label_166620;
    }
    ctx->pc = 0x166618u;
    {
        const bool branch_taken_0x166618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166618u;
        // 0x16661c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166618) {
            ctx->pc = 0x1673ACu;
            return;
        }
    }
    ctx->pc = 0x166620u;
label_166620:
    // 0x166620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_166624:
    // 0x166624: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x166624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_166628:
    // 0x166628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16662c:
    // 0x16662c: 0x8c637230  lw          $v1, 0x7230($v1)
    ctx->pc = 0x16662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29232)));
label_166630:
    // 0x166630: 0x600008  jr          $v1
label_166634:
    if (ctx->pc == 0x166634u) {
        ctx->pc = 0x166638u;
        goto label_fallthrough_0x166630;
    }
    ctx->pc = 0x166630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x166630:
    ctx->pc = 0x166638u;
}
