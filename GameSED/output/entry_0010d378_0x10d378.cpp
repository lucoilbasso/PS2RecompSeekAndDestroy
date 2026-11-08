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

// Function: entry_0010d378
// Address: 0x10d378 - 0x10d3f4
void entry_0010d378_0x10d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d378_0x10d378");
#endif

    switch (ctx->pc) {
        case 0x10d38cu: goto label_10d38c;
        case 0x10d3dcu: goto label_10d3dc;
        default: break;
    }

    ctx->pc = 0x10d378u;

    // 0x10d378: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d37c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d384: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D384u;
    SET_GPR_U32(ctx, 31, 0x10D38Cu);
    ctx->pc = 0x10D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D384u;
    // 0x10d388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D384u, 0x10D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D38Cu;
label_10d38c:
    // 0x10d38c: 0x26100150  addiu       $s0, $s0, 0x150
    ctx->pc = 0x10d38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10d390: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x10d390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x10d394: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x10d394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10d398: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x10d398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x10d39c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10d39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d3a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x10d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x10d3a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10d3a8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x10d3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x10d3ac: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x10d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10d3b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10d3b4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x10d3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x10d3b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x10d3bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d3c0: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x10D3C0u;
    {
        const bool branch_taken_0x10d3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C0u;
        // 0x10d3c4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c0) {
            ctx->pc = 0x10D3F4u;
            return;
        }
    }
    ctx->pc = 0x10D3C8u;
    // 0x10d3c8: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x10d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d3cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3d4: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D3D4u;
    SET_GPR_U32(ctx, 31, 0x10D3DCu);
    ctx->pc = 0x10D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3D4u;
    // 0x10d3d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D3D4u, 0x10D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3DCu;
label_10d3dc:
    // 0x10d3dc: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x10d3e0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x10d3e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10d3e4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10d3e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10d3ec: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x10d3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x10d3f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x10d3f4u;
}
