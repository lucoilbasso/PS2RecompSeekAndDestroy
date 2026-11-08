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

// Function: entry_0015747c
// Address: 0x15747c - 0x1574d4
void entry_0015747c_0x15747c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015747c_0x15747c");
#endif

    switch (ctx->pc) {
        case 0x157490u: goto label_157490;
        default: break;
    }

    ctx->pc = 0x15747cu;

label_15747c:
    // 0x15747c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x15747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_157480:
    // 0x157480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157484:
    // 0x157484: 0x2450fcb0  addiu       $s0, $v0, -0x350
    ctx->pc = 0x157484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_157488:
    // 0x157488: 0xc06a25a  jal         func_1A8968
label_15748c:
    if (ctx->pc == 0x15748Cu) {
        ctx->pc = 0x15748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157488u;
        // 0x15748c: 0x8e130404  lw          $s3, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157490u;
        goto label_157490;
    }
    ctx->pc = 0x157488u;
    SET_GPR_U32(ctx, 31, 0x157490u);
    ctx->pc = 0x15748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157488u;
    // 0x15748c: 0x8e130404  lw          $s3, 0x404($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x157488u, 0x157490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157490u;
label_157490:
    // 0x157490: 0x8e280260  lw          $t0, 0x260($s1)
    ctx->pc = 0x157490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_157494:
    // 0x157494: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x157494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157498:
    // 0x157498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15749c:
    // 0x15749c: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
label_1574a0:
    if (ctx->pc == 0x1574A0u) {
        ctx->pc = 0x1574A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15749Cu;
        // 0x1574a0: 0xae090404  sw          $t1, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574A4u;
        goto label_1574a4;
    }
    ctx->pc = 0x15749Cu;
    {
        const bool branch_taken_0x15749c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15749Cu;
        // 0x1574a0: 0xae090404  sw          $t1, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15749c) {
            ctx->pc = 0x1574D4u;
            return;
        }
    }
    ctx->pc = 0x1574A4u;
label_1574a4:
    // 0x1574a4: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x1574a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1574a8:
    // 0x1574a8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1574a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1574ac:
    // 0x1574ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1574acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1574b0:
    // 0x1574b0: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1574b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1574b4:
    // 0x1574b4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1574b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1574b8:
    // 0x1574b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1574b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1574bc:
    // 0x1574bc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1574bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1574c0:
    // 0x1574c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1574c4:
    // 0x1574c4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1574c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1574c8:
    // 0x1574c8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1574c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1574cc:
    // 0x1574cc: 0xe0f809  jalr        $a3
label_1574d0:
    if (ctx->pc == 0x1574D0u) {
        ctx->pc = 0x1574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574CCu;
        // 0x1574d0: 0x123300b  movn        $a2, $t1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574D4u;
        goto label_fallthrough_0x1574cc;
    }
    ctx->pc = 0x1574CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1574D4u);
        ctx->pc = 0x1574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574CCu;
        // 0x1574d0: 0x123300b  movn        $a2, $t1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574CCu, 0x1574D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1574cc:
    ctx->pc = 0x1574D4u;
}
