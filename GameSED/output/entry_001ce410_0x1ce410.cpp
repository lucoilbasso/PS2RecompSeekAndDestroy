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

// Function: entry_001ce410
// Address: 0x1ce410 - 0x1ce4b0
void entry_001ce410_0x1ce410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce410_0x1ce410");
#endif

    switch (ctx->pc) {
        case 0x1ce434u: goto label_1ce434;
        default: break;
    }

    ctx->pc = 0x1ce410u;

    // 0x1ce410: 0x8fc30490  lw          $v1, 0x490($fp)
    ctx->pc = 0x1ce410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
    // 0x1ce414: 0x27c205a0  addiu       $v0, $fp, 0x5A0
    ctx->pc = 0x1ce414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1440));
    // 0x1ce418: 0x27c70480  addiu       $a3, $fp, 0x480
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1152));
    // 0x1ce41c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ce41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ce420: 0x8fc50530  lw          $a1, 0x530($fp)
    ctx->pc = 0x1ce420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1328)));
    // 0x1ce424: 0x8fc4048c  lw          $a0, 0x48C($fp)
    ctx->pc = 0x1ce424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
    // 0x1ce428: 0x8fc60490  lw          $a2, 0x490($fp)
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
    // 0x1ce42c: 0xc07379c  jal         func_1CDE70
    ctx->pc = 0x1CE42Cu;
    SET_GPR_U32(ctx, 31, 0x1CE434u);
    ctx->pc = 0x1CE430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE42Cu;
    // 0x1ce430: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE70u, 0x1CE42Cu, 0x1CE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE434u;
label_1ce434:
    // 0x1ce434: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1ce438: 0x24a5e408  addiu       $a1, $a1, -0x1BF8
    ctx->pc = 0x1ce438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960136));
    // 0x1ce43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce440: 0x8fc30480  lw          $v1, 0x480($fp)
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1152)));
    // 0x1ce444: 0x8fc2048c  lw          $v0, 0x48C($fp)
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
    // 0x1ce448: 0xafc50530  sw          $a1, 0x530($fp)
    ctx->pc = 0x1ce448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1328), GPR_U32(ctx, 5));
    // 0x1ce44c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1ce44cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce450: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x1ce450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1ce454: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x1ce454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1ce458: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x1ce458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1ce45c: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x1ce45cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1ce460: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x1ce460u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1ce464: 0x7bb504f0  lq          $s5, 0x4F0($sp)
    ctx->pc = 0x1ce464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x1ce468: 0x7bb60500  lq          $s6, 0x500($sp)
    ctx->pc = 0x1ce468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x1ce46c: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x1ce46cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x1ce470: 0x7bbe0520  lq          $fp, 0x520($sp)
    ctx->pc = 0x1ce470u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x1ce474: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x1ce474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x1ce478: 0xc7bf0590  lwc1        $f31, 0x590($sp)
    ctx->pc = 0x1ce478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1ce47c: 0xc7be0588  lwc1        $f30, 0x588($sp)
    ctx->pc = 0x1ce47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1ce480: 0xc7bd0580  lwc1        $f29, 0x580($sp)
    ctx->pc = 0x1ce480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1ce484: 0xc7bc0578  lwc1        $f28, 0x578($sp)
    ctx->pc = 0x1ce484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1ce488: 0xc7bb0570  lwc1        $f27, 0x570($sp)
    ctx->pc = 0x1ce488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1ce48c: 0xc7ba0568  lwc1        $f26, 0x568($sp)
    ctx->pc = 0x1ce48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ce490: 0xc7b90560  lwc1        $f25, 0x560($sp)
    ctx->pc = 0x1ce490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ce494: 0xc7b80558  lwc1        $f24, 0x558($sp)
    ctx->pc = 0x1ce494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ce498: 0xc7b70550  lwc1        $f23, 0x550($sp)
    ctx->pc = 0x1ce498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ce49c: 0xc7b60548  lwc1        $f22, 0x548($sp)
    ctx->pc = 0x1ce49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ce4a0: 0xc7b50540  lwc1        $f21, 0x540($sp)
    ctx->pc = 0x1ce4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce4a4: 0xc7b40538  lwc1        $f20, 0x538($sp)
    ctx->pc = 0x1ce4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4A8u;
        // 0x1ce4ac: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE4B0u;
}
