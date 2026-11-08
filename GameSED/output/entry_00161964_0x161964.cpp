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

// Function: entry_00161964
// Address: 0x161964 - 0x1619c0
void entry_00161964_0x161964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161964_0x161964");
#endif

    switch (ctx->pc) {
        case 0x161984u: goto label_161984;
        case 0x161994u: goto label_161994;
        default: break;
    }

    ctx->pc = 0x161964u;

    // 0x161964: 0x8e8219d4  lw          $v0, 0x19D4($s4)
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6612)));
    // 0x161968: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x161968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16196c: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x16196cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x161970: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161974: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x161974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x161978: 0x8e8319d8  lw          $v1, 0x19D8($s4)
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6616)));
    // 0x16197c: 0xc065dcc  jal         func_197730
    ctx->pc = 0x16197Cu;
    SET_GPR_U32(ctx, 31, 0x161984u);
    ctx->pc = 0x161980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16197Cu;
    // 0x161980: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x16197Cu, 0x161984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161984u;
label_161984:
    // 0x161984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16198c: 0xc065dcc  jal         func_197730
    ctx->pc = 0x16198Cu;
    SET_GPR_U32(ctx, 31, 0x161994u);
    ctx->pc = 0x161990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16198Cu;
    // 0x161990: 0x8ca60024  lw          $a2, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x16198Cu, 0x161994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161994u;
label_161994:
    // 0x161994: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161998: 0x506001e0  beql        $v1, $zero, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x161998u;
    {
        const bool branch_taken_0x161998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161998) {
            ctx->pc = 0x16199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161998u;
            // 0x16199c: 0x8e9001b8  lw          $s0, 0x1B8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16211Cu;
            return;
        }
    }
    ctx->pc = 0x1619A0u;
    // 0x1619a0: 0x8e8219c4  lw          $v0, 0x19C4($s4)
    ctx->pc = 0x1619a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
    // 0x1619a4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1619a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619a8: 0x184001db  blez        $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x1619A8u;
    {
        const bool branch_taken_0x1619a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1619ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619A8u;
        // 0x1619ac: 0x8e8a19cc  lw          $t2, 0x19CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619a8) {
            ctx->pc = 0x162118u;
            return;
        }
    }
    ctx->pc = 0x1619B0u;
    // 0x1619b0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1619b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1619b4: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1619b8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1619bc: 0x0  nop
    ctx->pc = 0x1619bcu;
    // NOP
    ctx->pc = 0x1619c0u;
}
