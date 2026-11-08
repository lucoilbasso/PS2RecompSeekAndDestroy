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

// Function: entry_0016d3d4
// Address: 0x16d3d4 - 0x16d444
void entry_0016d3d4_0x16d3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d3d4_0x16d3d4");
#endif

    switch (ctx->pc) {
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d418u: goto label_16d418;
        default: break;
    }

    ctx->pc = 0x16d3d4u;

    // 0x16d3d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16d3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3d8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x16D3D8u;
    SET_GPR_U32(ctx, 31, 0x16D3E0u);
    ctx->pc = 0x16D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3D8u;
    // 0x16d3dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16D3D8u, 0x16D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3E0u;
label_16d3e0:
    // 0x16d3e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16d3e4: 0x244274b0  addiu       $v0, $v0, 0x74B0
    ctx->pc = 0x16d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29872));
    // 0x16d3e8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16d3e8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x2574B8u));
    // 0x16d3ec: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x16d3ecu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x2574B0u));
    // 0x16d3f0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x16d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x16d3f4: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D3F4u;
    SET_GPR_U32(ctx, 31, 0x16D3FCu);
    ctx->pc = 0x16D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3F4u;
    // 0x16d3f8: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D3F4u, 0x16D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3FCu;
label_16d3fc:
    // 0x16d3fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d400: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16d400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d404: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16d404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x16d408: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16d408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16d40c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16d40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d410: 0xc04c64e  jal         func_131938
    ctx->pc = 0x16D410u;
    SET_GPR_U32(ctx, 31, 0x16D418u);
    ctx->pc = 0x16D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D410u;
    // 0x16d414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131938u, 0x16D410u, 0x16D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D418u;
label_16d418:
    // 0x16d418: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x16d418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    // 0x16d41c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16d41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d420: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16d420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16d424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d428: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16d428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d42c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16d42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d430: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16d430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d434: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x16d434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d438: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16d438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16d43c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D43Cu;
        // 0x16d440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D444u;
}
