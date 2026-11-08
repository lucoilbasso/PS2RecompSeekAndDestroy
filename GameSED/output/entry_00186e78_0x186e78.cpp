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

// Function: entry_00186e78
// Address: 0x186e78 - 0x186f30
void entry_00186e78_0x186e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186e78_0x186e78");
#endif

    switch (ctx->pc) {
        case 0x186e84u: goto label_186e84;
        default: break;
    }

    ctx->pc = 0x186e78u;

    // 0x186e78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x186e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x186e7c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x186E7Cu;
    SET_GPR_U32(ctx, 31, 0x186E84u);
    ctx->pc = 0x186E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E7Cu;
    // 0x186e80: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x186E7Cu, 0x186E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E84u;
label_186e84:
    // 0x186e84: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x186e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186e88: 0x9e030178  lwu         $v1, 0x178($s0)
    ctx->pc = 0x186e88u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x186e8c: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x186e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x186e90: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x186e90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x186e94: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x186e94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x186e98: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x186e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x186e9c: 0xae290004  sw          $t1, 0x4($s1)
    ctx->pc = 0x186e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 9));
    // 0x186ea0: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x186ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x186ea4: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x186ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x186ea8: 0x354a0010  ori         $t2, $t2, 0x10
    ctx->pc = 0x186ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x186eac: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x186eb0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x186eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x186eb4: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x186eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x186eb8: 0x35080030  ori         $t0, $t0, 0x30
    ctx->pc = 0x186eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)48);
    // 0x186ebc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x186ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x186ec0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x186ec4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x186ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x186ec8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x186EC8u;
    {
        const bool branch_taken_0x186ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC8u;
        // 0x186ecc: 0x10a1023  subu        $v0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ec8) {
            ctx->pc = 0x186F30u;
            return;
        }
    }
    ctx->pc = 0x186ED0u;
    // 0x186ed0: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x186ed4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x186ed8: 0x8e0601a8  lw          $a2, 0x1A8($s0)
    ctx->pc = 0x186ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x186edc: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x186edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x186ee0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x186ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186ee4: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x186ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x186ee8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x186eec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186ef0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x186ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x186ef4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x186ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x186ef8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x186ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x186efc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x186efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186f00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x186f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x186f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x186f08: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x186f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x186f0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x186f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x186f10: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x186f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x186f14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x186f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x186f18: 0xfd070008  sd          $a3, 0x8($t0)
    ctx->pc = 0x186f18u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 7));
    // 0x186f1c: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x186f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x186f20: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x186f20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x186f24: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x186f28: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x186f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x186f2c: 0x10a1023  subu        $v0, $t0, $t2
    ctx->pc = 0x186f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    ctx->pc = 0x186f30u;
}
