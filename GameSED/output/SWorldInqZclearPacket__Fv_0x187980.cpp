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

// Function: SWorldInqZclearPacket__Fv
// Address: 0x187980 - 0x187acc
void SWorldInqZclearPacket__Fv_0x187980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SWorldInqZclearPacket__Fv_0x187980");
#endif

    ctx->pc = 0x187980u;

    // 0x187980: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x187984: 0x8f838d68  lw          $v1, -0x7298($gp)
    ctx->pc = 0x187984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    // 0x187988: 0x244ddc80  addiu       $t5, $v0, -0x2380
    ctx->pc = 0x187988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
    // 0x18798c: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x18798cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187990: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187994: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x187994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x187998: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x187998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x18799c: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x18799cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1879a0: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1879A0u;
    {
        const bool branch_taken_0x1879a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879A0u;
        // 0x1879a4: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879a0) {
            ctx->pc = 0x187AC4u;
            goto label_187ac4;
        }
    }
    ctx->pc = 0x1879A8u;
    // 0x1879a8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1879ac: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1879acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1879b0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1879b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1879b4: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x1879b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x1879b8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1879b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1879bc: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x1879bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x1879c0: 0xad83000c  sw          $v1, 0xC($t4)
    ctx->pc = 0x1879c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
    // 0x1879c4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1879c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1879c8: 0xad850008  sw          $a1, 0x8($t4)
    ctx->pc = 0x1879c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 5));
    // 0x1879cc: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1879d0: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x1879d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x1879d4: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x1879d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x1879d8: 0x358c0020  ori         $t4, $t4, 0x20
    ctx->pc = 0x1879d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32);
    // 0x1879dc: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1879dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1879e0: 0x240b0047  addiu       $t3, $zero, 0x47
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1879e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1879e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1879e8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1879e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1879ec: 0x34c68007  ori         $a2, $a2, 0x8007
    ctx->pc = 0x1879ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32775);
    // 0x1879f0: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x1879f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x1879f4: 0x34842001  ori         $a0, $a0, 0x2001
    ctx->pc = 0x1879f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8193);
    // 0x1879f8: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1879f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1879fc: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1879fcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x187a00: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x187a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x187a04: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x187a04u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x187a08: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x187a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x187a0c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x187a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x187a10: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x187a10u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    // 0x187a14: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187a14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187a18: 0x358c0030  ori         $t4, $t4, 0x30
    ctx->pc = 0x187a18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)48);
    // 0x187a1c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187a20: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187a24: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x187a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187a28: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x187a28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x187a2c: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x187a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x187a30: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x187a30u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x187a34: 0x24059000  addiu       $a1, $zero, -0x7000
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938624));
    // 0x187a38: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x187a38u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x187a3c: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187a40: 0x358c0040  ori         $t4, $t4, 0x40
    ctx->pc = 0x187a40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)64);
    // 0x187a44: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187a48: 0xfd870000  sd          $a3, 0x0($t4)
    ctx->pc = 0x187a48u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 7));
    // 0x187a4c: 0x24087200  addiu       $t0, $zero, 0x7200
    ctx->pc = 0x187a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
    // 0x187a50: 0xfd800008  sd          $zero, 0x8($t4)
    ctx->pc = 0x187a50u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 0));
    // 0x187a54: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187a58: 0x358c0050  ori         $t4, $t4, 0x50
    ctx->pc = 0x187a58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)80);
    // 0x187a5c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187a60: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x187a60u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x187a64: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x187a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x187a68: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x187a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x187a6c: 0xfd8a0008  sd          $t2, 0x8($t4)
    ctx->pc = 0x187a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 10));
    // 0x187a70: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187a74: 0x358c0060  ori         $t4, $t4, 0x60
    ctx->pc = 0x187a74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)96);
    // 0x187a78: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187a7c: 0xa5860000  sh          $a2, 0x0($t4)
    ctx->pc = 0x187a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x187a80: 0x24038e00  addiu       $v1, $zero, -0x7200
    ctx->pc = 0x187a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938112));
    // 0x187a84: 0xa5880002  sh          $t0, 0x2($t4)
    ctx->pc = 0x187a84u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x187a88: 0xfd890008  sd          $t1, 0x8($t4)
    ctx->pc = 0x187a88u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 9));
    // 0x187a8c: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x187a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x187a90: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187a90u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187a94: 0x358c0070  ori         $t4, $t4, 0x70
    ctx->pc = 0x187a94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)112);
    // 0x187a98: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187a98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187a9c: 0xfd890008  sd          $t1, 0x8($t4)
    ctx->pc = 0x187a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 9));
    // 0x187aa0: 0xa5850000  sh          $a1, 0x0($t4)
    ctx->pc = 0x187aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x187aa4: 0xa5830002  sh          $v1, 0x2($t4)
    ctx->pc = 0x187aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x187aa8: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x187aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x187aac: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187ab0: 0x358c0080  ori         $t4, $t4, 0x80
    ctx->pc = 0x187ab0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)128);
    // 0x187ab4: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x187ab8: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x187ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    // 0x187abc: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x187abcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x187ac0: 0xaf808d68  sw          $zero, -0x7298($gp)
    ctx->pc = 0x187ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 0));
label_187ac4:
    // 0x187ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x187AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187ACCu;
}
