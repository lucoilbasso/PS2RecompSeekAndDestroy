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

// Function: entry_001ce2b0
// Address: 0x1ce2b0 - 0x1ce350
void entry_001ce2b0_0x1ce2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce2b0_0x1ce2b0");
#endif

    switch (ctx->pc) {
        case 0x1ce2d4u: goto label_1ce2d4;
        default: break;
    }

    ctx->pc = 0x1ce2b0u;

    // 0x1ce2b0: 0x8fc3048c  lw          $v1, 0x48C($fp)
    ctx->pc = 0x1ce2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
    // 0x1ce2b4: 0x27c20590  addiu       $v0, $fp, 0x590
    ctx->pc = 0x1ce2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1424));
    // 0x1ce2b8: 0x27c70480  addiu       $a3, $fp, 0x480
    ctx->pc = 0x1ce2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1152));
    // 0x1ce2bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ce2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ce2c0: 0x8fc50520  lw          $a1, 0x520($fp)
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1312)));
    // 0x1ce2c4: 0x8fc40488  lw          $a0, 0x488($fp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
    // 0x1ce2c8: 0x8fc6048c  lw          $a2, 0x48C($fp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
    // 0x1ce2cc: 0xc07379c  jal         func_1CDE70
    ctx->pc = 0x1CE2CCu;
    SET_GPR_U32(ctx, 31, 0x1CE2D4u);
    ctx->pc = 0x1CE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2CCu;
    // 0x1ce2d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE70u, 0x1CE2CCu, 0x1CE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2D4u;
label_1ce2d4:
    // 0x1ce2d4: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1ce2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1ce2d8: 0x24a5e2a8  addiu       $a1, $a1, -0x1D58
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959784));
    // 0x1ce2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2e0: 0x8fc30480  lw          $v1, 0x480($fp)
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1152)));
    // 0x1ce2e4: 0x8fc20488  lw          $v0, 0x488($fp)
    ctx->pc = 0x1ce2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
    // 0x1ce2e8: 0xafc50520  sw          $a1, 0x520($fp)
    ctx->pc = 0x1ce2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1312), GPR_U32(ctx, 5));
    // 0x1ce2ec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1ce2ecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2f0: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x1ce2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1ce2f4: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1ce2f8: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x1ce2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1ce2fc: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x1ce2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1ce300: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x1ce300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1ce304: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x1ce304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1ce308: 0x7bb604f0  lq          $s6, 0x4F0($sp)
    ctx->pc = 0x1ce308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x1ce30c: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x1ce30cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x1ce310: 0x7bbe0510  lq          $fp, 0x510($sp)
    ctx->pc = 0x1ce310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x1ce314: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x1ce314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x1ce318: 0xc7bf0580  lwc1        $f31, 0x580($sp)
    ctx->pc = 0x1ce318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1ce31c: 0xc7be0578  lwc1        $f30, 0x578($sp)
    ctx->pc = 0x1ce31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1ce320: 0xc7bd0570  lwc1        $f29, 0x570($sp)
    ctx->pc = 0x1ce320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1ce324: 0xc7bc0568  lwc1        $f28, 0x568($sp)
    ctx->pc = 0x1ce324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1ce328: 0xc7bb0560  lwc1        $f27, 0x560($sp)
    ctx->pc = 0x1ce328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1ce32c: 0xc7ba0558  lwc1        $f26, 0x558($sp)
    ctx->pc = 0x1ce32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ce330: 0xc7b90550  lwc1        $f25, 0x550($sp)
    ctx->pc = 0x1ce330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ce334: 0xc7b80548  lwc1        $f24, 0x548($sp)
    ctx->pc = 0x1ce334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ce338: 0xc7b70540  lwc1        $f23, 0x540($sp)
    ctx->pc = 0x1ce338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ce33c: 0xc7b60538  lwc1        $f22, 0x538($sp)
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ce340: 0xc7b50530  lwc1        $f21, 0x530($sp)
    ctx->pc = 0x1ce340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce344: 0xc7b40528  lwc1        $f20, 0x528($sp)
    ctx->pc = 0x1ce344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce348: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE348u;
        // 0x1ce34c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE350u;
}
