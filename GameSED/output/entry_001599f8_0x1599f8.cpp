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

// Function: entry_001599f8
// Address: 0x1599f8 - 0x159a64
void entry_001599f8_0x1599f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001599f8_0x1599f8");
#endif

    switch (ctx->pc) {
        case 0x159a08u: goto label_159a08;
        case 0x159a1cu: goto label_159a1c;
        default: break;
    }

    ctx->pc = 0x1599f8u;

    // 0x1599f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1599f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1599fc: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x1599fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x159a00: 0xc060bca  jal         func_182F28
    ctx->pc = 0x159A00u;
    SET_GPR_U32(ctx, 31, 0x159A08u);
    ctx->pc = 0x159A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A00u;
    // 0x159a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F28u, 0x159A00u, 0x159A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A08u;
label_159a08:
    // 0x159a08: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x159A08u;
    {
        const bool branch_taken_0x159a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A08u;
        // 0x159a0c: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a08) {
            ctx->pc = 0x159AE8u;
            return;
        }
    }
    ctx->pc = 0x159A10u;
    // 0x159a10: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x159a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a14: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x159A14u;
    SET_GPR_U32(ctx, 31, 0x159A1Cu);
    ctx->pc = 0x159A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A14u;
    // 0x159a18: 0x8e500160  lw          $s0, 0x160($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x159A14u, 0x159A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A1Cu;
label_159a1c:
    // 0x159a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x159a20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x159a24: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x159a28: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x159a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x159a2c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x159A2Cu;
    {
        const bool branch_taken_0x159a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A2Cu;
        // 0x159a30: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a2c) {
            ctx->pc = 0x159A64u;
            return;
        }
    }
    ctx->pc = 0x159A34u;
    // 0x159a34: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159a38: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x159a3c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159a3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x159a40: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x159a40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x159a44: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159a48: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159a48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x159a4c: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159a4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x159a50: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x159a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x159a54: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159a54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x159a58: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159a58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x159a5c: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159a5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x159a60: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x159a60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    ctx->pc = 0x159a64u;
}
