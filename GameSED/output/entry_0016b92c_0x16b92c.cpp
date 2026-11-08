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

// Function: entry_0016b92c
// Address: 0x16b92c - 0x16ba60
void entry_0016b92c_0x16b92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b92c_0x16b92c");
#endif

    ctx->pc = 0x16b92cu;

    // 0x16b92c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x16b92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b930: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x16b930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x16b934: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x16b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16b938: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x16b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x16b93c: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x16b93cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x16b940: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16b944: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x16b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16b948: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x16b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16b94c: 0xde280178  ld          $t0, 0x178($s1)
    ctx->pc = 0x16b94cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x16b950: 0x24890070  addiu       $t1, $a0, 0x70
    ctx->pc = 0x16b950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x16b954: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x16b954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x16b958: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x16b958u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b95c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x16b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x16b960: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x16b960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16b964: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x16b964u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x16b968: 0x1aa1823  subu        $v1, $t5, $t2
    ctx->pc = 0x16b968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x16b96c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x16b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x16b970: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b974: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x16b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x16b978: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x16b978u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x16b97c: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x16b97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x16b980: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x16b980u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x16b984: 0x3c0c0005  lui         $t4, 0x5
    ctx->pc = 0x16b984u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)5 << 16));
    // 0x16b988: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x16b988u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x16b98c: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x16b990: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x16b990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b994: 0xde250160  ld          $a1, 0x160($s1)
    ctx->pc = 0x16b994u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x16b998: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x16b998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x16b99c: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x16b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x16b9a0: 0x24890060  addiu       $t1, $a0, 0x60
    ctx->pc = 0x16b9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x16b9a4: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x16b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x16b9a8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x16b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x16b9ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16b9b0: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x16b9b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16b9b8: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x16b9b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x16b9bc: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16b9c0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x16b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x16b9c4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x16b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x16b9c8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x16b9c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b9cc: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x16b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
    // 0x16b9d0: 0x240604e2  addiu       $a2, $zero, 0x4E2
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x16b9d4: 0xfd2c0000  sd          $t4, 0x0($t1)
    ctx->pc = 0x16b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 12));
    // 0x16b9d8: 0x24890080  addiu       $t1, $a0, 0x80
    ctx->pc = 0x16b9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x16b9dc: 0xfd4b0008  sd          $t3, 0x8($t2)
    ctx->pc = 0x16b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 11));
    // 0x16b9e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x16b9e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9e4: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x16b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x16b9e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16b9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b9ec: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x16b9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x16b9f0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x16b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16b9f4: 0x24190003  addiu       $t9, $zero, 0x3
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b9f8: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x16b9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16b9fc: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x16b9fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x16ba00: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x16ba00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x16ba04: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x16ba04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x16ba08: 0x843fc  dsll32      $t0, $t0, 15
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 15));
    // 0x16ba0c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x16ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x16ba10: 0x8e270174  lw          $a3, 0x174($s1)
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x16ba14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16ba18: 0x8eae01d8  lw          $t6, 0x1D8($s5)
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 472)));
    // 0x16ba1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16ba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x16ba20: 0x8e2c016c  lw          $t4, 0x16C($s1)
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x16ba24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16ba28: 0x8e2a0170  lw          $t2, 0x170($s1)
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x16ba2c: 0xfda60008  sd          $a2, 0x8($t5)
    ctx->pc = 0x16ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 6));
    // 0x16ba30: 0xfda20000  sd          $v0, 0x0($t5)
    ctx->pc = 0x16ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
    // 0x16ba34: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x16ba34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16ba38: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x16BA38u;
    {
        const bool branch_taken_0x16ba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA38u;
        // 0x16ba3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba38) {
            ctx->pc = 0x16BB5Cu;
            return;
        }
    }
    ctx->pc = 0x16BA40u;
    // 0x16ba40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16ba40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16ba44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16ba44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ba48: 0x262f0150  addiu       $t7, $s1, 0x150
    ctx->pc = 0x16ba48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x16ba4c: 0x27b80080  addiu       $t8, $sp, 0x80
    ctx->pc = 0x16ba4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16ba50: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x16ba50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ba54: 0x24101068  addiu       $s0, $zero, 0x1068
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4200));
    // 0x16ba58: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x16ba5c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x16ba5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x16ba60u;
}
